//
//  main.cpp
//  fibonacci_series_using_recursion
//
//  Created by Uby H on 11/06/23.
//

#include <iostream>
using namespace std;
int fib(int n)
{
    if((n-1)<=2)
        return n-1;
    return fib(n-2)+fib(n-1);
}
int main()
{
    int n;
    cout<<"Enter the nth term of fibonacci series which you want to find : ";
    cin>>n;
    cout<<n<<"th term of Fibonacci series is : "<<fib(n)<<endl;
    cout<<"The program returns negative numbers for invalid inputs"<<endl;
    return 0;
}
