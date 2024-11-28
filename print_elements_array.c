// Print the elements of an array 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array \n ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of array \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nThe elements of the array are : \n ");
    for(int i=0;i<n;i++)
    printf("  %d",arr[i]);
    return 0;
}
