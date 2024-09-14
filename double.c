#include <stdio.h>
#include <stdlib.h>

int* doubleArr(int* a, int n) {
    
    int* myArr = (int*)calloc(2 * n, sizeof(int));
    

    for (int j = 0; j < n; j++){
        myArr[j] = a[j];
    }
    free(a);
    

    
    return myArr;


}

int main() {
    int i;
    int n = 10;


    int *a = (int *)calloc(n, sizeof(int));
    for (i = 0; i<n; i++){
        a[i] = rand()%100;
    }

    a = doubleArr(a, n);
    n *= 2;


    printf("n: %d\n", n);
    for (i = 0; i<n; i++){
        printf("%d\n", a[i]);
    }
    return 0;


}
