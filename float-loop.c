#include <stdio.h>

int main(){

    double val = 0.0;
    double end = 1.0;
    double inc = 0.1;
    double sum = 0.0;

    printf("itra med fleytitolum fra %.2f til %.2f, upphaekkun %.2\n", val, end, inc);

    for (val = 0.0 ; val!=end; val+=inc){
        sum += val;
        printf("val = %.15f; sum = %.15f\n", val, sum);

    }

    printf("lykkju lokid med val = %.2f; sum = %.2f\n", val, sum);
 


}
