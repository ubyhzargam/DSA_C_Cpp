//
//  main.cpp
//  check_for_loop_in_linked_list
//
//  Created by Uby H on 21/07/23.
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
    struct Node *t=NULL,*last=NULL;
    first=(struct Node*)malloc(sizeof(struct Node));
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
bool isloop(struct Node* p)
{
    struct Node *q=NULL;
    q=p;
    do
    {
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:NULL;
    }while((p&&q)&&p!=q);
    if(p==q)return true;
    else return false;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the linked list : "<<endl;
    cin>>n;
    cout<<"Enter the elements in the linked list : "<<endl;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    create(A,n);
    if(isloop(first)==1)
        cout<<"The given linked list contains LOOP "<<endl;
    else
        cout<<"The given linked list does not contain LOOP "<<endl;
    return 0;
}
