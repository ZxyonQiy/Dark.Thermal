#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<string.h>
#include<unistd.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/wait.h>

   void stop() {
	 system("stop logd");
  }

 int main() {
	const char *ctrlA = "/data/media/0/Android/Thermal.log";

	sleep(5);

   int SetPermission = 0666;

	//main permissions
   chmod(ctrlA, SetPermission);

	sleep(2);

    FILE *log = fopen(ctrlA, "w");
  fprintf(log, "thermal log info by ZxyonQiy\n");

   if (log == NULL) {
	   perror("fopen");
	  return 1;
   }

   FILE *learn;
	learn = popen("find /sys -name enabled | grep \"msm_thermal\"", "r");
	
	if  (!learn) {
		perror("popen fail");
		exit(1);
	}
	
	char check[1024];
	while (fgets(check, 1024, learn) != NULL) {
	check[strcspn(check, "\n")] = '\0';
	
	FILE *wriA = fopen("find /sys -name enabled | grep \"msm_thermal\"", "w");
	
	if  (!wriA) {
		perror("fopen fail");
		exit(1);
	}
	
	char state[10];
	fscanf(wriA, "%s", state);
	
	int value;
	fscanf(wriA, "%d", &value);
	
	const char *surya = "value";
	
	if (strcmp(state, "Y") != 0) {
		fprintf(wriA, "N");
	}
	
	if (strcmp(surya, "1") != 0) {
		fprintf(wriA, "0");
	}

	fprintf(log, "success Apply Disable Thermal msm_thermal\n");

     fclose(wriA);
    pclose(learn);
   }
	
	sleep(2);
	
	FILE *sayang;
	sayang = popen("find /sys -name mode | grep \"thermal_zone\"", "r");
	
	if  (!sayang) {
		perror("popen fail");
		exit(1);
	}
	
	char lite[1010];
	while (fgets(lite, 1010, sayang) != NULL) {
		
	FILE *wriB = fopen("find /sys -name mode | grep \"thermal_zone\"", "w");
	
	if  (!wriB) {
		perror("fopen fail");
		exit(1);
	}
	
	char status[10];
	fscanf(wriB, "%s", status);
	
	char *ezza = "disabled";
	
	if (strcmp(status, "enabled") != 0) {
		fprintf(wriB, "%s", ezza);
	}

	fprintf(log, "success Apply Disable Thermal thermal_zone Mode\n");

   fclose(wriB);
     pclose(sayang);
  }
	
   FILE *thermal = popen("resetprop | awk -F '[][]' '/thermal/ {print $2}'", "r");

        if (!thermal) {
		perror("popen failed");
		exit(1);
	    }
   
    FILE *Voth = fopen("resetprop | awk -F '[][]' '/thermal/ {print $2}'", "w");
     
        if (!Voth) {
		perror("popen failed");
		exit(1);
	    }
   
   char test[] = "running";
   char restart[] = "restarting";
   char reset[] = "resetprop";
   
   char FireProcess[516];
      fgets(FireProcess, sizeof(FireProcess), thermal);
   
   char command[1022];
   char Setcommands[1022];
   
    if (strcmp(FireProcess, test) != 0 || strcmp(FireProcess, restart) != 0) {
       fputs(reset, stdout);
	
    sleep(1);
	
	sprintf(command, "stop FireProcess, | sed 's/init.svc.//', Voth");
	system("command");
	fprintf(log, "success Apply Disable Thermal init.svc is Stooped\n");

	sprintf(Setcommands, "resetprop -n FireProcess, stopped, Voth");
	system("Setcommands");
    fprintf(log, "success Apply Disable Thermal is Stopped\n");
   }
  pclose(thermal);
 fclose(Voth);
  
     if (system("resetprop -n init.svc.android.thermal-hal stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.mi-thermald stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.thermal stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.thermal-engine stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.thermal-hal stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.thermal-manager stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.thermal-managers stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.vendor-thermal-hal-1-0 stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.vendor.thermal-hal-1-0-mock stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.vendor.thermal-hal-1-0.mtk stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.vendor.thermal-hal-2-0 stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.vendor.thermal-hal-2-0-mock stopped") != 0) {
        perror("Error");
        return 1;
    }
    if (system("resetprop -n init.svc.vendor.thermal-hal-2-0.mtk stopped") != 0) {
        perror("Error");
        return 1;
    }
  
    char com[1011];
	
	sprintf(com, "resetprop -n sys.thermal.enable");
	char yoy[] = "true";
	char yoi[] = "false";
    
    if (strcmp(com, yoy) != 0) {
	  char DARK[512];
	   sprintf(DARK, "com, yoi");
		system("DARK");
		  fprintf(log, "success Apply Disable Thermal.enable\n");
		  return 0;
  } else {
	fprintf(log, "failed Apply Disable Thermal.enable\n");
  return 1;
 }
		
    sleep(2);
   FILE *zone;
	zone = popen("find /sys -name temp | grep \"thermal_zone\"", "r");
	char WaitProcess[1024];
	
	if  (zone != NULL) {
		perror("popen fail");
		 exit(1);
		  fprintf(log, "failed Apply Disable Thermal thermal_zone Temp\n");
	}
	
	  while (fgets(WaitProcess, 1024, zone) != NULL) {

   if (zone != 0) {
	char SetPermissions[] = "a-r";
	 mode_t permissions = 0;
	  char *inter;
	   permissions = strtol(SetPermissions, &inter, 8);
        chmod(WaitProcess, permissions);
	     fprintf(log, "success Apply Disable Thermal thermal_zone Temp\n");
   } else {
	  fprintf(log, "failed Apply Disable Thermal thermal_zone Temp\n");
   }
  pclose(zone);
 }
  fclose(log);
 return 0;
}