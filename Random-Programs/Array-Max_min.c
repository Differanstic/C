#include<stdio.h>
void main(){

    int arr[5];
    int max; 

    for(int i = 0 ; i < 5 ; i++){
        scanf("%d",&arr[i]);
    }

    max = arr[0];

    for(int i = 0; i < 5; i++){
        if(arr[i] < max){
            max = arr[i];
        }
    }

    printf("\nMax : %d",max);
    


}