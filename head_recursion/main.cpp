//
//  main.cpp
//  head_recursion
//
//  Created by Uby H on 10/06/23.
//

#include <iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<endl;
    }
}
int main()
{
    fun(3);
    return 0;
}
