#include<stdio.h>
void main(){
/* 

    * printf("") : print formatted -> stdio.h
        -> function to print on console    
        * Formating text in printf
            -> \n : to next line
            -> \t : to give tab(4 spaces)
            -> \v : to vertical tab
            -> \b : backspace
            -> \' : single quotes
            -> \" : double quotes
            -> \r : Carriage return


    * getch() : get character -> conio.h
        -> hold the program till it get input from keyboard
    
    * clrscr() : clear screen -> conio.h
        -> Clear the console screen

*/
printf("Hello\tWorld\nHave A Nice Day!!!\n");
printf("Hello World\tHave A Nice Day!!!\n"); // with vertical tab
printf("\"Hello\"\n"); // double quotes

printf("Hello"); // carriage return
printf("\rBye"); // will re-write above statement

}