//
//  main.cpp
//  factorial_of_number_using_recursion
//
//  Created by Uby H on 10/06/23.
//

#include <iostream>
using namespace std;
int fac(int n)
{
    if(n>0)
        return n*fac(n-1);
    else
        return 1;
}
int main()
{
    int x;
    cout<<"Enter the number to find it's factorial : ";
    cin>>x;
    cout<<"The factorial of "<<x<<" is "<<fac(x)<<endl;
    return 0;
}
