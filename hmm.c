#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// unsigned char notar bara 1 byte
int hmm( unsigned char n) {
    return (~n) & (~n << 1);

}

int hmm3( unsigned char n) {
    return (~n) & (~n << 1) & (~n << 2);

}

int hmmFyrir1(unsigned char n){
    return n & (n << 1);
    }

int main() {
    
    unsigned char myChar = 85; 
    unsigned char myChar2 = 146;

    unsigned char myChar3 = 71; // 1000111 thessi binary tala er med 3 null, aetti ad virka og gefa non-0 tolu
    unsigned char myChar4 = 103; // 1100111 thessi aetti ekki ad virka

    unsigned char myChar5 = 21; // 10101, ekki med 2 einum i rod
    unsigned char myChar6 = 26; // 11010, med 2 einum i rod, mun gefa non-0 tolu
    
    unsigned char num1 = hmm(myChar); 
    unsigned char num2 = hmm(myChar2); 

    unsigned char num3 = hmm3(myChar3); 
    unsigned char num4 = hmm3(myChar4); 

    unsigned char num5 = hmmFyrir1(myChar5); 
    unsigned char num6 = hmmFyrir1(myChar6); 
    
    printf("svar fyrir char1: %u \n", num1); // prentum i unsigned formatti, viljum ekki fa minus tolur
    printf("svar fyrir char2: %u \n", num2);

    printf("3 null svar fyrir char3: %u \n", num3); 
    printf("3 nullsvar fyrir char4: %u \n", num4);

    printf("tvofaldir 1 svar fyrir char5: %u \n", num5); 
    printf("tvofaldir 1 svar fyrir char6: %u \n", num6);
    
    return 0;
}

