#include<stdio.h>
void main(){
    char c = '*';
    printf("\033[1;31m");

    /*
    area = 0
    ****
    ****
    ****
    ****

    ****
    *  *
    *  *
    ****

    */

   for(int i = 1 ; i <= 10; i++ ){
        for(int j = 1; j <= 10; j++){
            if(i == 1 || i == 10 || j == 1 || j == 10)
            printf("%c ",c);
            else
            printf("  ");
        }
        printf("\n");
   }
    
    
}