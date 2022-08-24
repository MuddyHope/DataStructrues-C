#include<stdio.h>

int main(){

    int x = 11;
    for(int i=2;i<x;i++){
        if(x%i == 0){
            return 1;
        }
        else{
            printf("%d\n",i);
        }
    }
    printf("Prime bro\n");
    return 0;
}
