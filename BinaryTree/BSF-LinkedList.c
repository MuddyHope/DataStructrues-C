#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
  int data;
  struct Node *right, *left;
};
struct QueueNode{
    struct QueueNode *currentptr,*next;
};

struct Node *
createNode (int x)
{
  struct Node *temp = malloc (sizeof (struct Node));
  temp->right = temp->left = NULL;
  temp->data = x;
  return temp;
}

struct Node *
insert (struct Node *root, int x)
{
  if (root == NULL)
    {
      root = createNode (x);
    }
  else if (x <= root->data)
    {
      root->left = insert (root->left, x);
    }
  else
    {
      root->right = insert (root->right, x);
    }

  return root;

}

struct Node *arr[10] = {};


struct QueueNode *prevLink, *nextLink = NULL;

void enQueue(struct Node *temp){
    struct QueueNode *track =createNode(temp);
    if(prevLink == NULL && nextLink == NULL){
        prevLink=nextLink= track;
        return;
    }
    prevLink ->next = track;
    prevLink = track;
}
void deQueue(){
    struct QueueNode *travel = nextLink;
    while(travel->next == NULL){
        //printf("%d\n",travel->data);
        travel = travel->next;
    }
}

struct QueueNode *createQueueNode(struct Node *root){
    struct QueueNode *temp = malloc(sizeof(struct QueueNode));
    temp->currentptr = root;
    temp->next = NULL;
    return temp;
}

void levelOrder(struct Node *root){//root node is stored in currentptr
    struct Node* temp = root;
    while(temp != NULL){
        printf("value is %d\n", temp->data);
        enQueue(temp->right);
        enQueue(temp->left);
        deQueue();
    }
}


int main ()
{
  struct Node *root = NULL;
  root = insert(root,15);
  root = insert(root,20);
  root = insert(root,10);
  root = insert(root,9);
  root = insert(root,12);
  root = insert(root,16);
  root = insert(root,22);
  printf("root is %d\n", root);
  levelOrder(root);
  //struct QueueNode *temp = root;
  //printf("Thru Queuenode %d\n", temp->currentptr);


}

