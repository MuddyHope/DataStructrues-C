#include<stdio.h>

int A[10] ={};          //empty stack

int top;                //global top for keeping track

push(int x){

    top++;
    A[top]= x;

}
pop(){

    top--;

}

print(){
    for(int i=0; i <= top;i++){
        printf("%d\n", A[i]);
    }
}
int main() {
    top = -1;               //initialize top as -1 as it's empty
    push(7);
    push(9);
    pop();
    push(1283);
    push(23);
    pop();
    push(183);
    print();

}
