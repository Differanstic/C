#include<stdio.h>
void main(){
int num = 23476543;
// 2 + 3 + 4...
//int last = num % 10; //   8
//int new = num / 10; // 234567
//int l = new % 10 // 7
int sum = 0;
for(int x = 0; num != 0; x++)
    sum += num % 10;
    num /= 10;
}

printf("sum is %d",sum);


}