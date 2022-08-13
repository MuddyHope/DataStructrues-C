#include<stdio.h>
#include<stdlib.h>
//Inserting node at the value
struct Node {
    int data;
    struct Node* link;
};


struct Node *head;                  //creating head-pointer

struct Node *temp2;                          //temp2 is pointing at temp1 addrress
void Insert(int data, int n){
    struct Node *temp1 = malloc(sizeof(struct Node));   //creating a node and giving temp1 the address of the node

    temp1->data = data;
    temp1->link = NULL;                                 //initializing the link as NULL


    if(n == 1){
        temp1->link = head;
        head = temp1;
        //printf("Node1 is at %d\n",temp1);
        return;
    }


    struct Node *temp2 = head;                            //temp2 is pointing at temp1 addrress
    for(int i = 0;i<n-2;i++){
            temp2 = temp2->link;
            //printf("Current temp2 is %d\n", temp2);             //temp2 is printing 0
            //printf("Current temp1 is %d\n", temp1);
            //printf("Temp1 is at %d\n",temp2->link);
    }
    temp2->link = temp1;

}

void printLink(){

    struct Node* travel = head;
     while(travel != NULL){
        printf("%d\n",travel->data);
        travel = travel->link;
    };
}

int main() {

    //head = NULL;

    Insert(4,1);        //calling a function
    Insert(6,2);
    Insert(5,3);
    Insert(9,4);
    printLink();






}
