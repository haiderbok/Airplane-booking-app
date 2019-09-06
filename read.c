
//Read function reads from the file, 4 lines at a time until the end of file is reached
//The variables are use to store the record after they are validated.
//Finally these variables are passed to another function which creates list. 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "header.h"

void read(checkin_t **service,char ** argv){

FILE *fp;
//Variables to store from the file.
char longname[500];
char  num[1000];
char service1[100];
int val = 0;
int i = 0;
char food[3500];
// opening file to read from
if ((fp = fopen(argv[1],"r")) == NULL){
        fprintf(stderr,"Error opening the file");
        }
        while (1){
        // Reading in the file
        if (fgets(longname,3000,fp) == NULL){
        break;
        }
        longname[strlen(longname) - 1] = '\0';
        //Reading the service from the file
        if(fgets(service1, 1500,fp) == NULL){
        break;
        }
        service1[strlen(service1) -1] = '\0';
        //Reading the num from the file
        if (fgets (num,1000,fp) == NULL){
        break;
        }
        num[strlen(num) - 1] = '\0';
        //converting num into val
        val = atoi(num);
        //Reading in food from the file
        if (fgets (food,3100,fp) == NULL){
        break;
        }
        food[strlen(food) - 1] = '\0';
        //Validating the inputs provided
        if (strlen(longname) > 24){
        continue;
        }
        if ((strcmp(service1,"platinum")) && (strcmp(service1,"gold")) &&
                        (strcmp(service1,"silver")) && (strcmp(service1,"bronze"))){
        continue;
        }
        if (val < 44 || val > 50000){
              }
        if (strlen(food) > 30){
        continue;
        }
        // calling the function list
list(service,argv, longname, service1, val, food);


}
fclose(fp);
                                                              
