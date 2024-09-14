#include <stdio.h>
#include <stdlib.h>

int main(int inputs, char *argv[]){
    int myNumbers[3];
    int i, j, temp;

    for (int i = 0; i < 3; i++){
        myNumbers[i] = atoi(argv[i + 1]);
    }
    
    
    // bubble sort:

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2 - i; j++){
            if(myNumbers[j] > myNumbers[j+1]){
                temp = myNumbers[j];
                myNumbers[j] = myNumbers[j + 1];
                myNumbers[j + 1] = temp;

            }
        }
    }
    printf(" midgildid er: %d",myNumbers[1]);
}
