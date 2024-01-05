//
//  main.cpp
//  tower_of_hanoi_using_recursion
//
//  Created by Uby H on 11/06/23.
//

#include <iostream>
using namespace std;
void hanoi(int n,int A, int B, int C)
{
    if(n>0)
    {
        hanoi(n-1,1,3,2);
        cout<<"Move disc from "<<A<<" to "<<C<<endl;
        hanoi(n-1,2,1,3);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of discs to solve the tower of hanoi problem : ";
    cin>>n;
    hanoi(n,1,2,3);
    return 0;
}
