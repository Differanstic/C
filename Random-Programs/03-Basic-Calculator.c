#include<stdio.h>
void main(){
    int a,b;
    char c;
    printf("Basic Calculator");

    do{
    
    printf("\nEnter equation: ");
    scanf("%d%c%d",&a,&c,&b);// a= 34, c ='+' b = 89
    
    switch (c)
    {
    case '+':
        printf("%d",a + b);
        break;
    
    case '-':
        printf("%d",a - b);
        break;
    
    case '*':
        printf("%d",a * b);
        break;

    case '/':
        printf("%d",a / b);
        break;

    case '%':
        printf("%d",a % b);
        break;

    default:
        printf("invalid operation!!");
        break;
    }
    }while(c != '!');

}