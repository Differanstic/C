#include<stdio.h>
void main(){
    int range = 10;
    int sum = 0;
    for (int x = 1; x<=range; x++){
        if(x % 2 == 0){
            sum +=  x;
        }
    }

    printf("sum is %d",sum);
}