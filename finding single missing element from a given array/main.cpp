//
//  main.cpp
//  finding single missing element from a given array
//
//  Created by Uby H on 18/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int A[20];
    int n;
    int es,as;
    es=as=0;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements in the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i]; as=as+A[i];
    }
    es=((n+1)*(A[0]+A[n-1]))/2;
    cout<<"The single missing element from the array is : "<<es-as<<endl;
    return 0;
}
