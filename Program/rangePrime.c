#include<stdio.h>
int isPrime(int x);
void main(){
    int range = 100;

    for(int i = 2; i <= range; i++){
        if(isPrime(i))
            printf("%d is prime\n",i);

    }
}

int isPrime(int x){
    for(int i = 2; i <= (x / 2) ; i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}