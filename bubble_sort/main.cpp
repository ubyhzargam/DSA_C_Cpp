#include<iostream>
using namespace std;

void BubbleSort(int A[], int n)
{
    int temp=0;
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    cout<<"The elements in Sorted order are given by : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array to be sorted : "<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the elements in the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    BubbleSort(A,n);
}
