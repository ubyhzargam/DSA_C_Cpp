#include<iostream>
using namespace std;

struct Queue
{
    int data;
    Queue *next;
}*first=NULL,*last=NULL;

void Enqueue(int x)
{
    struct Queue *t=new Queue;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}

int Dequeue()
{
    int x=0;
    struct Queue *p=(struct Queue*)malloc(sizeof(struct Queue));
    if(first==last)
    {
        p=first;
        first=last=NULL;
        x=p->data;
        free(p);
    }
    else
    {
        p=first;
        x=p->data;
        first=first->next;
        free(p);
    }
    return x;
}

bool isEmpty()
{
    if(first==NULL)
        return true;
    else
        return false;
}

void BFS(int x,int n,int G[][7])
{
    int visited[7]={0};
    cout<<x<<" ";
    visited[x]=1;
    Enqueue(x);
    while(!isEmpty())
    {
        x=Dequeue();
        for(int i=1;i<n;i++)
        {
            if(G[x][i]==1&&visited[i]==0)
            {
                cout<<i<<" ";
                visited[i]=1;
                Enqueue(i);
            }
        }
    }
}

int visited[7]={0};

void DFS(int x,int G[][7],int n)
{
    int i;
    if(visited[x]==0)
    {
        cout<<x<<" ";
        visited[x]=1;
    }
    for(i=1;i<n;i++)
    {
        if(G[x][i]==1&&visited[i]==0)
            DFS(x,G,n);
    }
}

int main()
{
    int G[7][7]={{0,0,0,0,0,0,0},
        {0,0,1,1,0,0,0},
        {0,1,0,0,1,0,0},
        {0,1,0,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}};
    DFS(1,G,7);
    return 0;
}
