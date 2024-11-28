// Simple code to find if an element is present in an array, if found return it's position in the array 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array : \n ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array \n ");
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int ele;
    printf("\nEnter the element to be searched in the array using linear search technique : \n");
    scanf("%d",&ele);
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            index=i+1;
            break;
        }
    }
    if(index!=0)
    printf("\nThe element %d was found in the array at position %d ",ele,index);
    else
    printf("\nThe element %d was not found in the entered array ",ele);
    return 0;
}
