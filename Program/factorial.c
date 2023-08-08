#include<stdio.h>
void main(){
// 6! = 1*2*3*4*5*6;

int num = 12;
int fact = 1;

for(int i = 1; i <= num ; i++){
    if(i == num) printf("%d",i);
    else printf("%d * ",i);
    fact *= i; 
}

printf("\nFactorial is %d",fact);
}