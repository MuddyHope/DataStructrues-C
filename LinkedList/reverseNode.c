#include<stdio.h>
#include<stdlib.h>
//Inserting node at the value
struct Node {
    int data;
    struct Node* link;
};

int j = 0;
struct Node *head;                  //creating head-pointer

struct Node *temp2;                          //temp2 is pointing at temp1 addrress
void Insert(int data, int n){
    struct Node *temp1 = malloc(sizeof(struct Node));   //creating a node and giving temp1 the address of the node

    temp1->data = data;
    temp1->link = NULL;                                 //initializing the link as NULL

    //printf("%d\n",j++);

    if(n == 1){
        temp1->link = head;
        head = temp1;
        //printf("Node1 is at %d\n",temp1);
        return;
    }


    struct Node *temp2 = head;                            //temp2 is pointing at temp1 addrress
    for(int i = 0;i<n-2;i++){
            temp2 = temp2->link;
    }
    temp2->link = temp1;

}


void reverse(){

    struct Node *current,*prev,*next;
    current = head;
    prev, next = NULL;

    //starting, temp1 = 100;   swap = 200; tempswap = 300;
    while(current != NULL){

        next = current->link;
        current->link = prev;
        prev = current;
        current = next;

    }
    head = prev;
    //head = 400;
}




void printLink(){

    struct Node* travel = head;
     while(travel != NULL){
        printf("%d\n",travel->data);
        printf("link of the travel is %d\n",travel->link);
        travel = travel->link;
    };
}

int main() {

    //head = NULL;

    Insert(4,1);        //calling a function  //0
    Insert(6,2);            //1
    Insert(5,3);            //2
    Insert(9,4);            //3
    Insert(2323,5);         //4
    printLink();
    //delete(3);
    reverse();

    printLink();





}


