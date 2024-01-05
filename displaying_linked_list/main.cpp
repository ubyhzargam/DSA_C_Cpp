//
//  main.cpp
//  displaying_linked_list
//
//  Created by Uby H on 13/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Display1(struct Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        Display1(p->next);
    }
}
void Display2(struct Node *p)
{
    if(p!=NULL)
    {
        Display2(p->next);
        cout<<p->data<<" ";
    }
}
int count(struct Node *p)
{
    int c=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
}
int add(struct Node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the linked list : "<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the elements to be entered in the linked list : "<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    create(A,n);
    Display1(first);
    cout<<endl;
    Display2(first);
    cout<<"Number of nodes in the linked list are given by : "<<count(first)<<endl;
    cout<<"The sum of all the elements in the linked list are given by : "<<add(first)<<endl;
    return 0;
}
