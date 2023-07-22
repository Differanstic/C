#include<stdio.h>
void main(){

    int A = 5;
    int B = 10;
    int C = 0;

    // There are total 22 Normal Operators and 6 Bitwise Operators

 
    // Unery Operators (4)
        //pre | increment or decrement before the execution of line
            ++A; 
            --A;
        //post | increment or decrement after the execution of line
            A++;
            A--;
 
    // Arithemetic Operator (5)
        C = A + B;
        C = A - B;
        C = A * B;
        C = A / B;
        C = A % B; //(Modular Operators) -> returns remainder after division 

    //Assignment Operators (6)
        A = 10; // A = 10
        A += 5; // A = A + 5; output : 15
        A -= 5; // A = A - 5; output : 5
        A *= 5; // A = A * 5; output : 50
        A /= 5; // A = A / 5; output : 2
        A %= 5; // A = A % 5; output : 0

    // Comparison Operators(6)
        C = A == 10; // (Equal to) if equals return 1 else 0
        C = A!= 10; // (Not equals to) if not equals returns 1 else 0
        C = A > B; // (Greater than) if A > B return 1 else 0
        C = A >= B; // (Greater than or equals to)  
        C = A < B; // (Less than)
        C = A <= B; //(Less than or equals to)
    
    // Size Of Operators(1) 
        //size depends upon system architecture
        int sizeOfInt = sizeof(int); // 2 / 4 bytes
        int sizeofFloat = sizeof(float); // 4 bytes
        int sizeofDouble = sizeof(double);// 8 bytes
        int sizeofChar = sizeof(char); // 1 bytes

    // Bitwise Operator(6)

}