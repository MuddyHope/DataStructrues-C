#include<stdio.h>
#include<stdlib.h>


struct Node {

    int data;
    struct Node *next;

};

struct Noode *top = NULL;                   //stack tracker
push(int x){

    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = x;
    if(top == NULL){
        temp->next = NULL;
    }
    else {
        temp->next = top;
    }

    top = temp;


}
pop(){
    struct Node *temp = top;
    top = temp->next;

}
printStack(){
    struct Node *travel = top;
    while(travel != NULL){
        printf("%d\n", travel->data);
        travel = travel->next;
    }
}

int main() {
    //head = NULL;        //initialize top as -1 as empty stack
    push(7);
    push(8);
    //printStack();
    //printStack()
    pop();
    push(3);
    push(823);
    push(93);
    push(34);
    pop();
    printStack();

}
