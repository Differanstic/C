#include<stdio.h>
void main(){
    int a[26] = {0};
    char x[10] = "weerty"; // 97 - 122
    for(int i = 0; i < 10; i++){
        if(x[i]>= 97 && x[i]<=122 )
        a[x[i]-97] += 1;
    }

    for(int i = 0; i < 26; i++){
        printf("%c : %d\n",i+97,a[i]);
    }


     
}
