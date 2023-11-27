#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
int data;
struct _node *next;
}Node;
Node *start=NULL;

 void addatend( int data)
 {
     Node *t , *j;
     // declaration of pointers
     t=(Node *)malloc(sizeof(Node));
     t->data=data;
     t->next=NULL;
     //creation of new node
     if(start == NULL)
	{//for linkedlist with zero nodes
     		start=t;
     	}
     else
     {    j=start;
         while(j->next!=NULL)j=j->next;
         j->next=t;
         // t stores the address
     }
     j=start;
     while(j!=NULL)
    {
       printf("%d",j->data);
        j=j->next;
    }
	printf("\n");
 }


int main() {
   addatend(0);
   addatend(1);
   addatend(2);
    return 0;
}