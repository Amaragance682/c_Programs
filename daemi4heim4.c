#include <stdio.h>
#include <string.h>
#include <stdlib.h>


unsigned long sammengi(unsigned long a, unsigned long b){
// union af tvem mengjum, notum |

    return a | b;
}

unsigned long munur(unsigned long a, unsigned long b){
// set difference milli a og b, oll stok sem eru i a, en engin sem eru i b, notum AND (&) operator med a og neitun af b

    return a & (~b);
}

int stakI(unsigned long a, int i){
    return (a & (1ul << i)) > 0;
}



int main(){

   
    return 0;
}
