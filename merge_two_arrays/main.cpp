//
//  main.cpp
//  merge_two_arrays
//
//  Created by Uby H on 14/06/23.
//

#include<iostream>
using namespace std;
int main()
{
    int A[20],B[20],C[40];
    int Al,Bl,a=0,b=0,i;
    cout<<"Enter the number of elements in array A and array B respectively"<<endl;
    cin>>Al>>Bl;
    cout<<"Enter the elements of Array A"<<endl;
    for(int i=0;i<Al;i++)
        cin>>A[i];
    cout<<"Enter the elements of Array B"<<endl;
    for(i=0;i<Bl;i++)
        cin>>B[i];
    for(i=0;i<Al+Bl;i++)
    {
        if(A[a]<=B[b])
        {
            if(a>Al)
                break;
            C[i]=A[a];
            a++;
        }
        else
        {
            if(b>Bl)
                break;
            C[i]=B[b];
            b++;
        }
    }
        if(a>Al&&b<Bl)
        {
            for(i=i-1;i<Al+Bl;i++)
            {
                C[i]=B[b++];
            }
        }
        else if(a)
        {
            for(i=i-1;i<Al+Bl;i++)
            {
                C[i]=A[a++];
            }
        }
    
    cout<<"The merged array is given by : "<<endl;
    for(int i=0;i<Al+Bl;i++)
        cout<<C[i]<<"  ";
    cout<<endl;
    return 0;
}
