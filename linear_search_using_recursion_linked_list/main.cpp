//
//  main.cpp
//  linear_search_using_recursion_linked_list
//
//  Created by Uby H on 14/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
}*first=NULL;
void create(int A[], int n)
{
    Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last= first;
    for(int i=1;i<n;i++)
    {
        t=(Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
struct Node *search(struct Node *p, int key)
{
    if(p==NULL)
        return NULL;
        if(p->data==key)
            return p;
    return search(p->next,key);
}
int main()
{

}
