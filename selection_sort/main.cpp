#include<iostream>
using namespace std;

void SelectionSort(int A[],int n)
{
    int i,j,k,s;
    for(i=0;i<n-1;i++)
    {
        k=j=i;
        for(j=i;j<n;j++)
        {
            if(A[j]<A[k])
                k=j;
        }
        s=A[k];
        A[k]=A[i];
        A[i]=s;
    }
}

void Display(int A[],int n)
{
    cout<<"The elements of the array are given by : "<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}

int main()
{
    cout<<"Enter the number of elements to be entered in the Array :"<<endl;
    int n;
    int A[50];
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    SelectionSort(A,n);
    Display(A,n);
    return 0;
}
