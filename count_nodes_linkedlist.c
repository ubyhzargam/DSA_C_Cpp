// Simple C code to find the number of nodes in the linked list 

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

int main()
{
    int n;
    printf("Enter the number of elements in the linked list \n");
    scanf("%d",&n);
    struct Node *t,*last;
    printf("\nEnter the elements of linked list : \n");
    for(int i=0;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&t->data);
        t->next=NULL;
        if(first==NULL)
        {
            first=t;
            last=t;
            continue;
        }
        last->next=t;
        last=t;
    }
    printf("\nThe nodes in linked list are : \n");
    t=first;
    int i=0;
    while(t!=NULL)
    {
        i++;
        t=t->next;
    }
    printf("%d",i);
    return 0;
}
