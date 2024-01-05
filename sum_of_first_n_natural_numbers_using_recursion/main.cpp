//
//  main.cpp
//  sum_of_first_n_natural_numbers_using_recursion
//
//  Created by Uby H on 10/06/23.
//

#include <iostream>
using namespace std;
int fun(int n)
{
    if(n>0)
        return fun(n-1)+n;
    else
        return 0;
}
int main()
{
    int x;
    cout<<"Enter n for finding sum upto n natural numbers : ";
    cin>>x;1
    cout<<"The sum of natural numbers upto "<<x<<" is = "<<fun(x)<<endl;
    return 0;
}
