#include<stdio.h>
void main(){
    int arr[5] = {1,-8,2,5,-10};
    int small = arr[0];
    int secondSmall = arr[0];
    for(int i = 0 ; i < 5 ; i++){
        if(small > arr[i]){
            secondSmall = small;
            small = arr[i];
        }
    }
    printf("%d",secondSmall);
}