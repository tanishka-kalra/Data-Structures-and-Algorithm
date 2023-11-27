// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
typedef struct _node 
{
    int data;
    struct _node *next;
}Node;
Node *start=NULL;
    
     void insertattop(int data)
     {
         Node *t ;
         t = (Node*)malloc(sizeof(Node));
         t->data=data;
         t->next=start;
         start=t;
     }
     void insertatend(int data)
     {
         Node* t , *j;
         t=(Node*)malloc(sizeof(Node));
         t->data=data;
         t->next=NULL;
         if(start==NULL)
         start=t;
          
         else
         {   j=start;
             while(j->next!=NULL)
             j=j->next;
             j->next=t;
             
         }
     }
    void print()
    {
     Node *j;
     j=start;
     while(j!=NULL)
     {
         printf("%d\n",j->data);
         j=j->next;
     }
    }
int main() {
   insertattop(4);
   insertatend(5);
   insertattop(3);
   insertatend(6);
   print();

    return 0;
}
/*
3->4->5->6



*/