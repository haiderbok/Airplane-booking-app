//list creates the nodes and checks the service and then respectively assigns the record to each header
//the list has 4 pointers for each service and they point to last record of each one
#include<stdlib.h>
        #include<stdio.h>
        #include<string.h>
        #include"header.h"
// Four pointers of type structure used to keep track of the records
        checkin_t*temp1;
        checkin_t*temp2;
        checkin_t*temp3;
        checkin_t*temp4;
        int i=0;
        void list(checkin_t**service,char**argv,char*longname1,char*service1,int val,char*food){
//create a node
        checkin_t*node;
//dynamically allocate memmory for each node.
        if((node=malloc(sizeof(checkin_t)))!=NULL){
//Storing the record in the nodes
        strcpy(node->longname,longname1);
        node->randomnum=val;
        node->favfood=strdup(food);
        node->next=NULL;
// Each service has a header and this if-else structure makes sure
// each one is assigned properly
        if(strcmp(service1,"platinum")==0){
        if(service[0]==NULL){
        service[0]=node;
        temp1=service[0];

        }else{
        temp1->next=node;
        temp1=node;
        }
        }else if(strcmp(service1,"gold")==0){
        if(service[1]==NULL){
        service[1]=node;
        temp2=service[1];
        }else{
        temp2->next=node;
        temp2=node;
        }
        }else if(strcmp(service1,"silver")==0){
        if(service[2]==NULL){
        service[2]=node;
        temp3=service[2];
        }else{
        temp3->next=node;
        temp3=node;
        }

        }else if(strcmp(service1,"bronze")==0){
        if(service[3]==NULL){
        service[3]=node;
        temp4=service[3];
        }else{
        temp4->next=node;
        temp4=node;
        }
        }
        }
// freeing up the allocated memmory for node
        free(node);
        }
        }
