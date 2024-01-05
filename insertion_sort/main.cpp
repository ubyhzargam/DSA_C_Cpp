#include<iostream>
using namespace std;

void InsertionSort(int A[], int n)
{
    int j;
    int x;
    for(int i=1;i<n;i++)
    {
        x=A[i];
        for(j=i-1;j>=0;j--)
        {
            if(A[j]>x)
            {
                A[j+1]=A[j];
            }
            else
                break;
        }
        A[j+1]=x;
    }
}

void Display(int A[],int n)
{
    cout<<"The array elements in the sorted order are given by : "<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array to be sorted : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array to be sorted : "<<endl;
    int A[50];
    for(int i=0;i<n;i++)
        cin>>A[i];
    InsertionSort(A,n);
    Display(A,n);
    return 0;
}
