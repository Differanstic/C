#include<stdio.h>
void main(){
    char c = 'R';
    /*
    Size 1 Byte
    1 Bytes - > 8 Bits
    1|0|1|0|0|0|0|0|
    
    Range:
    -128 to 127 +1
    -128

    \0 -> Null Char | Terminating Char

    ASCII
    American Standard Code For Information Inter-change
    
    0 - 126

    char x = 124 -> ASCII Nmber
    %d  -> ASCII NUMBER
    %c  -> CHARACTER 
    */
    
    int a[4] = {1,2,3,4};


    //String
    char name[20];
    printf("Enter you Name: ");
    scanf("%s",&name);
    printf("\n Your name is : %s",name);
}