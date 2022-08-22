#include<stdio.h>
#include<stdlib.h>


struct Node {
    int data;
    struct Node *next;

};
int top = 0;
struct Node *head;
struct Node *prevLink, *nextLink = NULL;
push(int x){

    struct Node *temp = malloc(sizeof(struct Node));    //temp is pointing to new node
    temp->data = x;
    temp->next = NULL;
    if(prevLink == NULL && nextLink == NULL){
        prevLink=nextLink= temp;
        return;
    }
    prevLink ->next = temp;
    prevLink = temp;


}
pop(){
    struct Node *travel = nextLink;

    while(travel->next == NULL){
        //printf("%d\n",travel->data);
        travel = travel->next;
    }
}
printLink(){
    struct Node *travel = nextLink;
    //printf("Head in printlink is %d\n",head);
    while(travel != NULL)
        {
        printf("%d\n",travel->data);
        travel = travel->next;
    }
}
int main(){
    head = NULL;
    top = -1;
    push(10);
    push(20);
    push(324);
    push(34);
    //printf("Head in main is %d\n",head);
    pop();
    printLink();

}
