// main file containing the function main calls the function read and output
// read reads the file and then calls on a function which makes a list
// output prints the list in order specified.
#include<stdio.h>
        #include<stdlib.h>
        #include<string.h>
        #include"header.h"
        int main(int argc,char**argv){
// creates the head of pointers
        checkin_t*service[4];
// initialising each head of the list to NUll
        for(int i=0;i< 4;i++){
        service[i]=NULL;
        }
        // calling read function
        read(service,argv);
        //calling output function
        output(service,argv);
        }
