#include<stdio.h>
void main(){
    /*
        ~ Primitive Datatypes

            * int (%d)
                size: 2 or 4 bytes
                range: -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
            * float (%f)
                size: 4 bytes
                range: 3.4E-38 to 3.4E+38 | 3.4*10^38
            * double (%lf)
                size: 8 bytes
                range: 1.7E-308 to 1.7E+308 | 1.7*10^308
            * char (%c)
                size: 1 byte
                range: -128 to 127

        ~ Other Primitive Datatypes
            * short (%hd)
                size : 2 bytes
                range : -32,768 to 32,767
            * long (%ld)  
                size : 4 bytes
                range : -2,147,483,648 to 2,147,483,647 | same as int
                
    */

    int A = 12;
    float B = 3.1459;
    double C = 1.6180339887;
    char name = '^';

    printf("int: %d\n",A);
    printf("float: %f\n",B);
    printf("double: %lf\n",C);
    printf("char: %c\n",name);


    // Type Casting in C

        int i = 10;
        float f = 3.14 ;

    //  ~ Explicit Casting
        i = (int)f;
        printf("\v\vExplicit Casting: %d\n",i);

    //  ~ Implicit casting
        i = f;
        printf("Implicit Casting: %d\n",i);

}