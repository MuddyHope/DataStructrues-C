#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
  int data;
  struct Node *right, *left;
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

int front = 0, back = -1;
int Next(int i)
{
  int next = i + 1;
  if (next == 10) next = 0;
  return next;
}

void enQueue(struct Node *temp){
    back = Next(back);
    arr[back] = temp;
}
void deQueue(){
    arr[front] = NULL;
    front = Next(front);
}
void levelOrder(struct Node *root){
    struct Node *current = root;
    enQueue(current);
    while(current != NULL){
        current = arr[front];
        deQueue();
        printf("current value is %d\n", current);
        printf("value is %d\n",current->data);
        if(current->right != NULL) enQueue(current->right);
        if(current->left != NULL) enQueue(current->left);
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
  levelOrder(root);


}
