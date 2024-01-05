//
//  main.cpp
//  taylor_series_using_recursion
//
//  Created by Uby H on 11/06/23.
//

#include <iostream>
using namespace std;
double taylor(int x, int n)
{
   double r;
    static double p=1,f=1;
    if(n==0)
        return 1;
    else
    {
        r=taylor(x,n-1);
        p=p*x;
        f=f*n;
        return r+(p/f);
    }
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
