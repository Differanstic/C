#include<stdio.h>

struct Item{
    char name[20];
    int price;
    int stock;
};

void addItem(){
    char name[20] = "Item1";
    int price = 20;
    int stock = 100;

    struct Item i;
    i.name = name;
    i.price = price;
    i.stock = stock;

    FILE *ItemFIle = fopen("ITEM.DAT","ab+");
   
    fwrite(&i,sizeof(i),1,ItemFIle);   
    fclose(ItemFIle);
}


void main(){

    int choice = 1;
    while(choice<4){
        printf("....");
        scanf("%d",&choice);

        switch(choice){
         case 1:
         addItem();
         break;   
        }
    }
}