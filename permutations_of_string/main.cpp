//
//  main.cpp
//  permutations_of_string
//
//  Created by Uby H on 30/06/23.
//

#include <iostream>
using namespace std;
void per(char ch[],int h, int l)
{
    char s;
    int i;
    if(l==h)
        cout<<ch<<endl;
    else
    {
    for(i=l;i<=h;i++)
    {
        s=ch[i];
        ch[i]=ch[l];
        ch[l]=s;
        per(ch,h,l++);
        s=ch[i];
        ch[i]=ch[l];
        ch[l]=s;
    }
    }
}
int main()
{
    int l=0;
    char ch[50];
    cout<<"Enter the string to print all it's permutations : "<<endl;
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++)l++;
    per(ch,l-1,0);
    return 0;
}
