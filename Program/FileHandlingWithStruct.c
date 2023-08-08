#include<stdio.h>
#include<stdlib.h>

FILE * fp;
int len = 0;
struct Number
{
    int number;
    int isEven;
} num;


void saveNumberToFile(struct Number num){
    fwrite(&num,sizeof(struct Number),1,fp);
}

void printNumbersFromFile(){
    rewind(fp);
    printf("\v\vData From File\n");
    while(fread(&num,sizeof(struct Number),1,fp) == 1){
        printf("%-5d|%-5s\n",num.number,num.isEven?"Even":"Odd");
    }
}

struct Number* getNumberFromFile(){
    
    while(fread(&num,sizeof(struct Number),1,fp) == 1){
        len++;
    }
    printf("length: %d",len);
    rewind(fp);
    struct Number* n =(struct Number*)calloc(sizeof(struct Number),len);
    for(int i = 0 ; i < len ; i++){
        fread(&n[i],sizeof(struct Number),1,fp);
    }
    rewind(fp);
    return n;
}

int checkNumberExists(struct Number *n, int number){
    for(int i = 0 ; i < len; i++){
        if(n->number == number){
            return 1;
        }
        n++;
    }
    return 0;
}

void main(){
    fp = fopen("Odd-Even.dat","ab+");
    int x ;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(!checkNumberExists(getNumberFromFile(),x)){
        num.number = x;
        num.isEven = num.number % 2 == 0;
        saveNumberToFile(num);
    }
    else{
        printf("\v\vNumber Already in File!");
    }
    printNumbersFromFile();

    fclose(fp);
}
