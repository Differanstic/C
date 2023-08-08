#include<stdio.h>
void main(){
    int height = 10;
    int width = (2 * height) + 1;
    int start = width / 2;
    int end = width / 2;

    for(int i = 0 ; i < height ; i++){

        for(int j = 0 ; j < width; j++){
            if(j >= start && j <= end)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        start--;
        end++;
    }


   for(int i = 0 ; i < height ; i++){

        for(int j = 0 ; j < width; j++){
            if(j >= start && j <= end)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        start++;
        end--;
    }
    
  
}