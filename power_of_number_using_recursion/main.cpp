//
//  main.cpp
//  power_of_number_using_recursion
//
//  Created by Uby H on 10/06/23.
//

#include <iostream>
using namespace std;
int pow(int m, int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return pow(m*m,n/2);
    else
        return m*(pow(m*m,(n-1)/2));
    
}
int main()
{
    int m,n;
    cout<<"Enter the base or the number which should be raised to the power : ";
    cin>>m;
    cout<<"Enter the power to which the base should be raised : ";
    cin>>n;
    cout<<"Number "<<m<<" raised to the power "<<n<<" is "<<pow(m,n)<<endl;
    return 0;
}
