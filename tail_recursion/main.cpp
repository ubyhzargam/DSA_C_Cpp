//
//  main.cpp
//  tail_recursion
//
//  Created by Uby H on 10/06/23.
//

#include <iostream>
using namespace std;
void fun(int n)
{
   if(n>0)
   {
       cout<<n<<endl;
       fun(n-1);
   }
}
int main()
{
    fun(3);
    return 0;
}
