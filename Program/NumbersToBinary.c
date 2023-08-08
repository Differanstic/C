#include<stdio.h>
void main(){

    int num, q , r;
    int bits[10];
    int count = 0;
    printf("Enter Number to Convert to Binary: ");
    scanf("%d",&num);

    do{
        q = (int)(num / 2);
        r = num % 2;
        bits[count] = r;
        count++;
        printf("%d",r);
        num /= 2;
    }while(q != 0);

    int bytes = (count / 8) + 1;
    printf("\n %d bytes",bytes);
}