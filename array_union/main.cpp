//
//  main.cpp
//  array_union
//
//  Created by Uby H on 14/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int A[20],B[20],C[40];
    int a,b,c=0;
    cout<<"Enter the number of elements in array A : "<<endl;
    cin>>a;
    cout<<"Enter the number of elements in array B : "<<endl;
    cin>>b;
    cout<<"Enter the elements of Array A : "<<endl;
    for(int i=0; i<a; i++)
        cin>>A[i];
    cout<<"Enter the elements in Array B : "<<endl;
    for(int i=0; i<b; i++)
        cin>>B[i];
    for(int i=0; i<a; i++)
    {
        for(int j=0;j<b;j++)
        {
            if(A[i]==B[j])
            {
                C[c]=A[i];
                c++;
                break;
            }
        }
    }
    cout<<"The resultant array is given by : "<<endl;
    for(int i=0;i<c;i++)
        cout<<C[i]<<endl;
}
