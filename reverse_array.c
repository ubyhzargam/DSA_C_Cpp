// Simple C code to reverse an array 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int temp;
    printf("Enter the number of elements in the array \n");
    int n;
    scanf("%d",&n);
    printf("\nEnter the elements of array \n");
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\n The reversed array is given by \n");
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++)
    printf(" %d",arr[i]);
    return 0;
}
