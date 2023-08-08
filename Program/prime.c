#include<stdio.h>
void main(){
    int num; //17 -> 1,17
    int isPrime = 1; 
    scanf("%d",&num);
    //2 - 16
    for(int x = 2; x < num; x++){
        if(num % x == 0){
            isPrime = 0; 
            break;
        }
    }
//isPrime // 0 , 1
    if(isPrime){
        printf("%d is prime\n",num);
    }else
    printf("%d is not prime\n",num);



}