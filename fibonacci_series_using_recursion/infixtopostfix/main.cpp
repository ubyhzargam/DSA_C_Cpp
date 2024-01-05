#include<iostream>
using namespace std;
struct Stack
{
    int top;
    int size;
    char *s;
};

bool isCharacter(char ch)
{
    if((ch!='+'&&ch!='-')&&(ch!='*'&&ch!='/'))
        return true;
    else
        return false;
}

int isOperator(char ch)
{
    if(ch=='+'||ch=='-')
        return 1;
    else if(ch=='*'||ch=='/')
        return 2;
    else
        return 0;
}

void push(struct Stack *stk, char ch)
{
    if(stk->top<=stk->size-1)
    {
        stk->top++;
        stk->s[stk->top]=ch;
    }
}

char pop(struct Stack *stk)
{
        if(stk->top!=-1)
        return stk->s[stk->top--];
    return ' ';
}

char *postfix(char *prefix)
{
    int j=0;
    struct Stack stk;
    stk.top=-1;
    stk.size=0;
    int i=0;
    while(prefix[i]!='\0')
    {
        stk.size++;
        i++;
    }
    i=0;
    char *post=(char*)malloc(sizeof(char)*(stk.size+1));
    stk.s=new char[stk.size];
    push(&stk,' ');
    while(prefix[i]!='\0')
    {
        if(isCharacter(prefix[i]))
        {
            post[j++]=prefix[i++];
        }
        else
        {
            if(isOperator(prefix[i])>isOperator(stk.s[stk.top]))
                push(&stk,prefix[i++]);
            else
                post[j++]=pop(&stk);
        }
            
    }
    while(stk.top!=-1)
    {
        post[j++]=pop(&stk);
    }
    return post;
}

int main()
{
    char prefix[50];
    cout<<"Enter the expression to find it's postfix : "<<endl;
    cin>>prefix;
    cout<<"The postfix for the given prefix is : "<<postfix(prefix)<<endl;
    return 0;
}
