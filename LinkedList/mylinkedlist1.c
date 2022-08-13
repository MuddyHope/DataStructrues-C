#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node *head;

void Insert(int x){
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = head;
    head = temp;
    printf("Temp is %d\n",temp);
    printf("Node link is %d\n", temp->link);
}

void printLink(){
    //printf("Hi\n");

    struct Node* travel = head;
    while(travel != NULL){
        printf("%d\n",travel->data);
        travel = travel->link;
    }
}
int main(){
    head = NULL;
    int i,n,x = 0;
    printf("Enter how many numbers\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the numbers\n");
        scanf("%d",&x);
        Insert(x);
    }
    printf("The list is:\n");
    printLink();
}
