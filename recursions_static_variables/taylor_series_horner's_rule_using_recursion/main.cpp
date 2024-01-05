//
//  main.cpp
//  taylor_series_horner's_rule_using_recursion
//
//  Created by Uby H on 11/06/23.
//

#include <iostream>
using namespace std;
double taylor(int x, int n)
{
    static double s=1;
    if(n==0)
        return s;
    s=1+x*s/n;
    return taylor(x,n-1);
}
    int main()
{
    int x,n;
    cout<<"Enter x to find taylor series : ";
    cin>>x;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"The result = "<<taylor(x,n)<<endl;
    return 0;
}
