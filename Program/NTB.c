#include<stdio.h>
void main(){

// char | 1 byte | 8 bits |
// char range(-128,127)
// range (128 + 127) = 256
    int num = 257;
    int r, q;
    int bits[10];
    int count = 0;

    do{
    q = num / 2;
    r = num % 2;
    printf("%d",r);
    bits[count] = r;
    count++;
    num /= 2;
    }while(q != 0);

    printf("\v\vBits"); 
    while(count != -1){
        printf("%d",bits[count]);
        count--;
    }
}