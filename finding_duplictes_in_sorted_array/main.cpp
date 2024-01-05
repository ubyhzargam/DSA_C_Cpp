//
//  main.cpp
//  finding_duplictes_in_sorted_array
//
//  Created by Uby H on 18/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int lastdup=0,n,i,c=0;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements in the array : "<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"The duplicates in the entered array are given by : "<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            lastdup=arr[i];
            c++;
            continue;
        }
        if(lastdup!=arr[i+1]&&lastdup==arr[i])
        {
            cout<<"The element "<<arr[i]<<" was repeated "<<c<<" times "<<endl;
            c=0;
        }
    }
    return 0;
}
