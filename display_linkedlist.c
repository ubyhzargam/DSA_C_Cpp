// Simple C code to create a linked list and display the elements entered in the linked list 

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
    printf("\nThe elements entered in linked list are given by : \n");
    t=first;
    while(t!=NULL)
    {
        printf(" %d",t->data);
        t=t->next;
    }
    return 0;
}
