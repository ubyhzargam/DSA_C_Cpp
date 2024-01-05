//
//  main.cpp
//  finding_duplicate_elements_in_array
//
//  Created by Uby H on 18/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int A[40];
    int n,d=0;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    cout<<"The duplicates in the array are given by : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]==A[j])
            {
                d++;
                A[j]=-(i+j+A[i]);
            }
        }
        if(d>0)
            cout<<"The element "<<A[i]<<" is repeated "<<d<<" times "<<endl;
        d=0;
    }
    return 0;
}

