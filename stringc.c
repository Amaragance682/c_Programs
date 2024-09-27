#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
    
    int lengd = 0;

    for (int i = 1; i < argc; i++){
        lengd += strlen(argv[i]);
 
       }


    char *samskeyting = (char *)malloc(lengd * sizeof(char));
    
    for (int j = 1; j < argc; j++){
        strcat(samskeyting, argv[j]);
        
    }


    printf("lengd: %d \n", lengd);
    printf("samskeyting: %s\n", samskeyting);


    }
