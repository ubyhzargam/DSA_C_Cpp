//
//  main.cpp
//  create_sparsed_matrix
//
//  Created by Uby H on 09/07/23.
//

#include <iostream>
#include<stdlib.h>
using namespace std;
struct Element
{
    int i;
    int j;
    int x;
};
struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *e;
};
void create(struct Sparse *s)
{
    int i;
    cout<<"Enter the number of rows of the sparse matrix : "<<endl;
    scanf("%d",&s->m);
    cout<<"Enter the number of columns of the sparse matrix : "<<endl;
    scanf("%d",&s->n);
    cout<<"Enter the number of non-zero elements in the sparse matrix : "<<endl;
    scanf("%d",&s->num);
    cout<<"Enter the row number, column number and the non-zero element present respectively : "<<endl;
    s->e=(struct Element*)malloc((s->num)*sizeof(struct Element));
    for(i=0;i<s->num;i++)
    {
        scanf("%d",&s->e[i].i);
        scanf("%d",&s->e[i].j);
        scanf("%d",&s->e[i].x);
    }
    
}
void display(struct Sparse s)
{
    int i,j,k=0;
    for(i=0;i<s.m;i++)
    {
        for(j=0;j<s.n;j++)
        {
            if(i==s.e[k].i&&j==s.e[k].j)
                cout<<s.e[k++].x<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    struct Sparse s;
    create(&s);
    display(s);
    return 0;
}
