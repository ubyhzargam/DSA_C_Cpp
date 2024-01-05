//
//  main.cpp
//  displaying_elements_in_circular_linked_list
//
//  Created by Uby H on 21/07/23.
//

#include <stdio.h>
#include <stdlib.h>
struct Node {
void create(int A[],int n)
{
int data;
}*Head;
struct Node *next;

int i;
struct Node *t,*last;
Head=(struct Node*)malloc(sizeof(struct Node));
Head->data=A[0];
Head->next=Head;
last=Head;
for(i=1;i<n;i++)
{
t=(struct Node*)malloc(sizeof(struct Node));
t->data=A[i];
t->next=last->next;
last->next=t;
last=t;
}
}
void Display(struct Node *h)
{
do
{
printf("%d ",h->data);
h=h->next;
}while(h!=Head);
printf("\n");
}
int main()
{
    int n;
    cout<<"Enter the number of distinct elements in the linked list : "<<endl;
    cin>>n;
    cout<<"Enter all distinct elements to form a circular linked list : "<<endl;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    create(A,n);
    cout<<"The elements of the linked list are given by : "<<endl;
    Display(Head);
    return 0;
}


