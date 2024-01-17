// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
typedef struct _BST
{
    int data;
    struct _BST * left , *right;
}Tree;
Tree *start = NULL;
Tree *create(int data)
{
    Tree *t;
    t=(Tree*)malloc(sizeof(Tree));
    t->data=data;
    t->right=NULL;
    t->left=NULL;
    return t;
}
void insertNode(int data)
{
    Tree * t, *j;
    t=create(data);
    if(start==NULL){
    start=t;
    return ;
    }
    j=start;
    while(1)
    {
        if(t->data<j->data)
        {
            if(j->left==NULL)
            {
                j->left=t;
                break;
            }
            else j=j->left;
        }
        if(t->data>j->data)
        {
            if(j->right==NULL)
            {
                j->right=t;
                break;
            }
            else j=j->right;
        }
    }

}
void print(Tree *start)
{
    if(start==NULL) return;
    
    print(start->left);
   printf("%d\n",start->data);
    print(start->right);
   
}
int main() {
 insertNode(100);
insertNode(50);
insertNode(75);
insertNode(25);

print(start);
    return 0;
}