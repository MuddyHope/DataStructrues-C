#include<stdio.h>


int main(){

    int input,digits,temp;
    printf("Enter the number to be checked\n");
    scanf("%d", &input);
    temp = input;

    while(temp>0){
        digits = digits + (temp%10)*(temp%10)*(temp%10);
        temp = temp/10;

    }

    if(input == digits){
        printf("Armstrong\n");
        return 1;
    }
    printf("Not armstrong\n");
    return 0;

}
