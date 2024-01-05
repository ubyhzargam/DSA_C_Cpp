#include<iostream>
using namespace std;

struct Node
{
    Node *lchild;
    Node *rchild;
    int data;
    int height;
}*root=NULL;

int Height(struct Node *p)
{
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;
    return hl>hr?hl+1:hr+1;
}

int BalanceFactor(struct Node *p)
{
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;
    return hl-hr;
}

struct Node *LLRotation(struct Node *p)
{
    struct Node *pl=p->lchild,*plr=pl->rchild;
    pl->rchild=p;
    p->lchild=plr;
    p->height=Height(p);
    pl->height=Height(pl);
    
    if(root==p)
        root=pl;
    return pl;
}

struct Node *RRRotation(struct Node *p)
{
    struct Node *rc=p->rchild,*rcl=rc->lchild;
    rc->lchild=p;
    p->rchild=rcl;
    p->height=Height(p);
    rc->height=Height(rc);
    if(root==p)
        root=rc;
    return rc;
}

struct Node *LRRotation(struct Node *p)
{
    struct Node *pl=p->lchild,*plr=p->lchild->rchild;
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;
    plr->lchild=pl;
    plr->rchild=p;
    pl->height=Height(pl);
    p->height=Height(p);
    plr->height=Height(plr);
    if(root==p)
        root=plr;
    return plr;
}

struct Node *RLRotation(struct Node *p)
{
    struct Node *rc=p->rchild,*rcl=p->rchild->lchild;
    p->rchild=rcl->lchild;
    rc->lchild=rcl->rchild;
    rcl->lchild=p;
    rcl->rchild=rc;
    p->height=Height(p);
    rc->height=Height(rc);
    rcl->height=Height(rcl);
    if(root==p)
        root=rcl;
    return rcl;
}

struct Node *RecursiveInsert(struct Node *p, int key)
{
    Node *t;
    t=NULL;
    if(p==NULL)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->height=1;
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    else if(p->data<key)
        p->rchild=RecursiveInsert(p->rchild,key);
    else if(p->data>key)
        p->lchild=RecursiveInsert(p->lchild,key);
    p->height=Height(p);
    if(BalanceFactor(p)==2&&BalanceFactor(p->lchild)==1)
    {
        return LLRotation(p);
    }
    else if(BalanceFactor(p)==2&&BalanceFactor(p->lchild)==-1)
    {
        return LRRotation(p);
    }
    else if(BalanceFactor(p)==-2&&BalanceFactor(p->rchild)==-1)
    {
        return RRRotation(p);
    }
    else if(BalanceFactor(p)==-2&&BalanceFactor(p->rchild)==1)
    {
        return RLRotation(p);
    }
    else
    return p;
}

int main()
{
    root=RecursiveInsert(root,10);
    RecursiveInsert(root,30);
    RecursiveInsert(root,20);
    
    return 0;
}
