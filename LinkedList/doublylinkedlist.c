#include<stdio.h>
#include<stdlib.h>


struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *head;
//creating a node with 3 data types
Insert(int x, int n){

    struct Node *temp =  malloc(sizeof(struct Node));         //creating a node and temp pointer to the addrress of the new node
    struct Node *nextlink;
    struct Node *prevlink;

    temp->prev = NULL;
    temp->next = NULL;
    temp->data = x;
    //creating node with previous and next as null
    if(n == 1){
        head = temp;
        temp->prev = NULL;
        prevlink = temp;
        return;
    }
    for(int i=0;i<n-1;i++){
        nextlink = temp;
        temp->prev = prevlink;
        prevlink->next = nextlink;
        //prevlink = nextlink;
    }
     prevlink = nextlink;
}

printLink(){

    struct Node *travel = head;
    printf("head is pointing at %d\n", head);
    while(travel != NULL){
        //printf("Links are pointing at %d\n", travel);
        printf("Previous links are %d\n", travel->prev);
        printf("value : %d\n",travel->data);
        printf("Next links are %d\n", travel->next);
        travel = travel->next;

    }

}
reversePrint(){
    struct Node *travel = head;
    //Going to the last node
    printf("Head is at %d\n", travel);
    while(travel->next != NULL){
        travel = travel->next;
        //printf("travel is at %d\n", travel);
    }
    //now travel will be the last element

    while(travel != NULL){
        printf("The value is %d\n", travel->data);
        travel = travel->prev;
    }
}
int main()
{
    int n,i,x =0;

    Insert(6,1);
    Insert(7,2);
    Insert(8,3);
    Insert(9,4);
    //printLink();
    //Reverse();
    reversePrint();

}
