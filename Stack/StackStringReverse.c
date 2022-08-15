#include<stdio.h>
#include<string.h>


char stack[100];
int top;

push(char x){

    //printf("letter is %c\n",x);
    top++;
    stack[top] = x;

}
pop(){

    printf("%c",stack[top]);
    top--;


}

int main() {

    char word[20];
    top = -1;
    printf("Enter the word\n");
    scanf("%s",&word);

    for(int i=0;i<strlen(word);i++){
        //printf("letter is %c\n",word[i]);
        push(word[i]);
    }

    for(int j=0;j<strlen(word);j++){
        pop();
    }

}
