//
//  main.cpp
//  finding a pair of elements with sum k
//
//  Created by Uby H on 18/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int n,i,j,k;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements in the array : "<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"Enter the sum k such that the sum of two elememts in a pair must add upto to give k : "<<endl;
    cin>>k;
    cout<<"The pair of elements which on sum with each other would result in "<<k<<" are : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>0&&arr[i]>0)
            {
                if(arr[i]+arr[j]==k)
                {
                    cout<<arr[i]<<"  "<<arr[j]<<endl;
                    arr[j]=-999999;
                }
            }
        }
    }
        return 0;
}
