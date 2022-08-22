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

struct Node *stackarr[10] = {};

int count = -1;

int Next(int i){
    i++;
    if (i == 10) return 0;
    return i;
}



void push(struct Node* temp){
    count = Next(count);
    stackarr[count] = temp;
}
struct Node* pop(){
    struct Node *temp = stackarr[count];
    count --;
    return temp;

}

void deepOrder(struct Node *root){
    struct Node* top = root;
    push(top);
    while(count != -1){
        top = pop();
        printf("Value is %d\n",top->data);
        if(top->right != NULL) push(top->right);
        if(top->left != NULL) push(top->left);
        top = stackarr[count];
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
  deepOrder(root);
}
