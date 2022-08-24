#include<stdio.h>
int main(){
int input, rev=0, temp;
//input is 12321;

printf("Enter the number\n");
scanf("%d\n", &input);
temp = input;   //making a copy of the input

while(temp > 0 ){
    rev = rev*10 + temp%10;
    temp = temp /10;
}

printf("Input is %d\n", input);
printf("Output is %d\n", rev);
}
