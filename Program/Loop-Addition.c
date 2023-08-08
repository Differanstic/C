#include<stdio.h>
void main(){
    int noOfInput = 0;
    int n;
    int sub;
    int i = 0;
    printf("Enter the No. value you want to add: ");
    scanf("%d",&noOfInput);


    while(i < noOfInput){
        scanf("%d", &n); //12,2
        if(i == 0)// i == 0
            sub = n; // sub = 12
        else
            sub -= n; //sub = 12 - 2 
        i++;
    }

    printf("Sum : %d",sub);
}