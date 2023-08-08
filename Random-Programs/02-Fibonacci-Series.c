#include<stdio.h>
void main(){
    int range = 20;

    int a = 0;
    int b = 1;
    int c = b; 

    for(int i = 0; i < range; i++){
         printf("%d\n",c);

         a = b;
         b = c;
         c = a + b;   

    }
}