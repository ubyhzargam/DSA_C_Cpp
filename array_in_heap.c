// Creating an array in heap memory and deleting the heap memory after use 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array \n ");
    scanf("%d",&n);
    int *p;
    p=(int*)malloc((sizeof(int))*n);
    printf("\nEnter the elements of array \n ");
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
    printf("\n The elements of the array are given by : \n");
    for(int i=0;i<n;i++)
    printf(" %d",p[i]);
    free(p);
    return 0;
}
