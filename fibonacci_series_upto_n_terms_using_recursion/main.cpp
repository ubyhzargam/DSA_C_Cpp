//
//  main.cpp
//  fibonacci_series_upto_n_terms_using_recursion
//
//  Created by Uby H on 11/06/23.
//

#include <iostream>
using namespace std;
void fib(int n)
{
    static int f=0,s=1;
    static int p=0;
   if(n>0)
   {
       fib(n-1);
       if(n==1)
       {
           cout<<"0 ";
       }
       else if(n==2)
       {
           cout<<"1 ";
       }
       else
       {
           p=f+s;
           f=s;
           s=p;
           cout<<p<<" ";
       }
   }
}
int main()
{
    int n;
    cout<<"Enter the nth term of fibonacci series which you want to find : ";
    cin>>n;
    fib(n);
    cout<<endl;
    return 0;
}
