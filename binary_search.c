// Simple program to search the entered element in the entered array using binary search technique. The entered array must be in increasing order for this
// code 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array : \n ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array in increasing order \n ");
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int ele;
    printf("\nEnter the element to be searched in the array using binary search technique : \n");
    scanf("%d",&ele);
    int index=0;
    int l=0,h=n-1;
    int mid = 0;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(arr[mid]==ele)
        {
            index=mid+1;
            break;
        }
        else if(arr[mid]>ele)
        h=mid-1;
        else l=mid+1;
    }
    if(index!=0)
    printf("\nThe element %d was found in the array at position %d ",ele,index);
    else
    printf("\nThe element %d was not found in the entered array ",ele);
    return 0;
}
