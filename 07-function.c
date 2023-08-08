#include<stdio.h>

int write(int x){
    printf("%d",x);
}

void main(){
    int y = 56;
    write(y);
}