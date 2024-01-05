//
//  main.cpp
//  fibbonacci_using_memoization_recursion
//
//  Created by Uby H on 11/06/23.
//

#include <iostream>
using namespace std;
int F[30];
int fib(int n)
{
    if((n-1)<=2)
    {
        F[n-1]=n-1;
        return n-1;
    }
    else
    {
        if(F[n-1]==-1)
            F[n-1]=fib(n-1);
        if(F[n-2]==-1)
            F[n-1]=fib(n-1);
        return fib(n-2)+fib(n-1);
    }
}
int main()
{
    for(int i=0;i<30;i++)
        F[i]=-1;
    int n;
    cout<<"Enter the nth term of fibonacci series which you want to find : ";
    cin>>n;
    cout<<n<<"th term of Fibonacci series is : "<<fib(n)<<endl;
    cout<<"The program returns negative numbers for invalid inputs"<<endl;
    return 0;
}
