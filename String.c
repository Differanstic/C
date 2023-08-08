#include<stdio.h>
#include<string.h>

void main(){
    
    char str[20] = "Hello";
    char copiedStr[20];

    //String Length
    printf("%d\n",strlen(str));

    // Copy String
    strcpy(copiedStr,str);
    printf("%s\n",copiedStr);

    //Concatenation of String
    strcat(str,copiedStr);
    printf("%s\n",str);

    //Comparing String
    int output = strcmp(str,copiedStr);
    if(output == 0){
        printf("Strings are equal");
    }else{
        if(output>0)
            printf("String is greater");
        else
            printf("String is lesser");
    }


    //gets & puts
    printf("\nEnter string: ");
    gets(str); // input from string
    fgets(str,20,stdin);
    puts(str);


}