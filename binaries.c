#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef unsigned char *pointer;

void show_bytes(pointer start, size_t len){
    size_t i;
    for(i = 0; i < len; i++){
        printf("%p\t0x%.2x\n", start+i, start[i]);
        printHexInBinary(start[i]);
        printf("\n");
    }
    printf("\n");
}

void printHexInBinary(unsigned int hex){
    for (int j = 31; j >= 0; j--){
        printf("%d", (hex >> j) & 1);

        if (j % 4 == 0){
            printf(" ");
        }
    }
}


int main(){
    int a = 0x123456;
    printf("int a = 0x123456;\n");
    show_bytes((pointer) &a, sizeof(int));
    return 0;

}
