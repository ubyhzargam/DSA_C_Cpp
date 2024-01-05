//
//  main.cpp
//  counting_number_of_nodes_and_sum_of_linked_list_using_recursion
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
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
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
int count(struct Node *p)
{
    if(p==NULL)
        return 0;
    return 1+count(p->next);
}
int sum(struct Node *p)
{
    if(p==NULL)
        return 0;
    return p->data+sum(p->next);
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the linked list : "<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the elements in the linked list : "<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    create(A,n);
    cout<<"The number of nodes in the given linked list are given by : "<<count(first)<<endl;
    cout<<"The sum of all the elements in the linked list is given by : "<<sum(first)<<endl;
    return 0;
}


