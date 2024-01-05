//
//  main.cpp
//  finding single missing element from an array
//
//  Created by Uby H on 18/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[20],l;
    cout<<"Enter the number of elements in the array : ";
    cin>>l;
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<l;i++)
        cin>>arr[i];
    for(int i=0;i<l-1;i++)
    {
        if(arr[i+1]-arr[i]!=1)
            cout<<"The missing element in the array is : "<<arr[i]+1<<endl;
    }
    return 0;
}
