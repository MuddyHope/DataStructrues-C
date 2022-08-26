#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *right,*left;
};

struct Node *createNode(int x){
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->right = temp->left = NULL;
    return temp;
}

struct Node *insert(struct Node *root, int data){
    if(root == NULL){
        root = createNode(data);
        return root;
    }
    if(data > root->data){
        root->right = insert(root->right,data);
    }
    else{
        root->left = insert(root->left,data);
    }
    return root;

}
int front=0, last=0;
int *arr[10];

void enQueue(struct Node *temp){
    arr[front] = temp;
    front++;
}

void deQueue(){
    arr[last] = NULL;
    last++;
}

void levelOrder(struct Node *root){
    struct Node *temp = root;
    enQueue(temp);
    while(temp != NULL){
        printf("Value is %d\n", temp->data);
        //swap(temp->right,temp->left);
        if(temp->right!= NULL) enQueue(temp->right);
        if(temp->left != NULL) enQueue(temp->left);
        deQueue();
        temp = arr[last];
    }

}

swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void mirror(struct Node *root){
    if(root == NULL) return;
    else{
        struct Node *temp;
        mirror(root->left);
        mirror(root->right);

        temp = root->right;
        root->right = root->left;
        root->left = temp;
    }


}

void inOrder(struct Node *root){
    if(root == NULL) return;

    inOrder(root->right);
    printf("%d\n", root->data);
    inOrder(root->left);
}


int main(){
    struct Node *root;
    root = NULL;
    root = insert(root,15);
    root = insert(root,21);
    root = insert(root,10);
    root = insert(root,17);
    root = insert(root,23);
    root = insert(root,13);
    root = insert(root,9);
    //printLink(root);
    //levelOrder(root);
    mirror(root);
    //inOrder(root);
    levelOrder(root);

}

