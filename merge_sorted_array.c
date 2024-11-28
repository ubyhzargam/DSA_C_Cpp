// Simple C code to merge two sorted arrays and create a third sorted array containing the merged elements of the two 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the number of elements in the first array \n");
    int n1;
    scanf("%d",&n1);
    printf("\n Enter the elements of first array \n");
    int *arr1=(int*)malloc(sizeof(int)*n1);
    for(int i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
    
    printf("Enter the number of elements in the second array \n");
    int n2;
    scanf("%d",&n2);
    printf("\n Enter the elements of second array \n");
    int *arr2=(int*)malloc(sizeof(int)*n2);
    for(int i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
    
    int max=(n1>n2)?n1:n2;
    
    int *arr=(int*)malloc(sizeof(int)*max);
    
    int i=0;
    int j=0,k=0;
    while(j<n1&&k<n2)
    {
        arr[i++]=(arr1[j]<arr2[k])?(arr1[j++]):arr2[k++];
    }
    for(int x=j;x<n1;x++)
    arr[i++]=arr1[x];
    for(int x=k;x<n2;x++)
    arr[i++]=arr2[x];
    printf("\n The merged array is given by : \n ");
    for(int i=0;i<n1+n2;i++)
    printf(" %d",arr[i]);
    return 0;
}







