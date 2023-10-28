#!/bin/sh

SKIPMOUNT=false
PROPFILE=false
POSTFSDATA=true
LATESTARTSERVICE=false

REPLACE=""

unzip -o "$ZIPFILE" 'LOGO' -d "$MODPATH" >&2
ui_print ""
ui_print ""
ui_print "$(awk '{print}' "$MODPATH/LOGO")"
ui_print ""
ui_print ""

sleep 1
  ui_print "- Extracting Modules ZIPFILES"
  unzip -o "$ZIPFILE" 'module.prop' -d "$MODPATH" >&2
  unzip -o "$ZIPFILE" 'post-fs-data.sh' -d "$MODPATH" >&2
  unzip -o "$ZIPFILE" 'README.md' -d "$MODPATH" >&2
  unzip -o "$ZIPFILE" 'update.json' -d "$MODPATH" >&2
  unzip -o "$ZIPFILE" '.gitignore' -d "$MODPATH" >&2
  unzip -o "$ZIPFILE" 'LICENSE' -d "$MODPATH" >&2

sleep 3
   ui_print "- Extracing SystemThermal"
   mkdir -p "$MODPATH"/system/bin
   unzip -o "$ZIPFILE" 'SystemThermal' -d "$MODPATH"/system/bin >&2
   unzip -o "$ZIPFILE" 'SystemThermal.c' -d "$MODPATH"/system/bin >&2
  chmod +x "$MODPATH"/system/bin/SystemThermal

sleep 2
ui_print ""
ui_print "Completed Installed Modules."