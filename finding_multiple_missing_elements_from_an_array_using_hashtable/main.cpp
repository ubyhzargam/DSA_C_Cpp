//
//  main.cpp
//  finding_multiple_missing_elements_from_an_array_using_hashtable
//
//  Created by Uby H on 18/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int A[20],H[100];
    int n;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<100;i++)
        H[i]=0;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
        H[A[i]]++;
    }
    cout<<"The missing elements in the given array are : "<<endl;
    for(int i=A[0];i<A[n-1];i++)
        if(H[i]==0)
            cout<<i<<endl;
    return 0;
}
