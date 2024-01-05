//
//  main.cpp
//  deleting_from_linked_list
//
//  Created by Uby H on 17/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
    first=(struct Node *)malloc(sizeof(struct Node));
    struct Node *last,*t;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void del(int x)
{
    struct Node *q=(struct Node*)malloc(sizeof(struct Node));
    q=NULL;
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));p=first;
    while(p!=NULL)
    {
        if(p->data==x&&p==first)
        {
            first=p->next;
            delete p;
            p=first;
            continue;
        }
        else if(p->data==x&&p!=first)
        {
            q->next=p->next;
            delete p;
            p=q;
            continue;
        }
        q=p;
        p=p->next;
    }
}
int main()
{
    int n,x;
    cout<<"Enter the number of non-zero elements in the linked list : "<<endl;
    cin>>n;
    cout<<"Enter the elements in the linked list : "<<endl;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    create(A,n);
    cout<<"The original array is given by : "<<endl;
    display(first);
    cout<<"Enter the element to be deleted from the linked list : "<<endl;
    cin>>x;
    del(x);
    cout<<"The updated linked list after deletion of the given element is given by : "<<endl;
    display(first);
}
