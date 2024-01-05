//
//  main.cpp
//  ncr_using_recursion
//
//  Created by Uby H on 11/06/23.
//

#include <iostream>
using namespace std;
int C(int n, int r)
{
    if(r==0||r==n)
        return 1;
    else
        return C(n-1,r-1)+C(n- 1,r);
}
int main()
{
    int n,r;
    cout<<"Enter n and r respectively to find ncr : ";
    cin>>n;
    cin>>r;
    cout<<"The result is = "<<C(n,r)<<endl;
    return 0;
}
