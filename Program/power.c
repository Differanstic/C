#include<stdio.h>

void main(){
    int factor1, factor2;
    int limit;
    printf("Write the factor value[int,int] :");
    scanf("%d,%d",&factor1,&factor2);

    printf("Enter the limit: ");
    scanf("%d",&limit);

    for (int i = 1; i < limit; i++){
        if(i % factor1 == 0 || i % factor2 == 0 ){ // true
                    printf("%d\n",i);
            }
    }
 
}