#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    int score = 0;
    int run = 0;
    int computerRun;
    srand(time(0));
    printf("Hand - Cricket!!\t");
    while (1)
    {
       printf("Enter run : ");
        scanf("%d",&run);
        computerRun = rand()%10;
        if(computerRun != run){
        score += run;
        printf("Computer guess : %-5d | your score : %-5d\n",computerRun,score);
        }
        else{
            printf("Computer guess %d\n",computerRun);
            printf("Your score = %d", score); 
            break;}
    }
    
    

}