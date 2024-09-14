#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    int x = atoi(argv[1]);
    int inntala;
    while (scanf("%d", &inntala) != EOF){
        printf("%d \n", inntala + x);
    
        
    }
    return 0;
}
