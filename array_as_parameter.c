// A basic C program to see how the function returns an array and how the array is passed as parameter from one function to another. Arrays are always passed // by address, they are never passed by value or passed by reference.
#include <stdio.h>
#include <stdlib.h>
int * fun(int *A,int *B,int n)
{
    int *C=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    C[i]=A[i]+B[i];
    return C;
}

int main()
{
    int n;
    printf("Enter the number of elements in the array \n ");
    scanf("%d",&n);
    int A[n],B[n];
    int *C;
    printf("\nEnter the elements of the first array : \n");
    for(int i=0;i<n;i++)
    scanf("%d",&A[i]);
    printf("\nEnter the elements of the second array : \n");
    for(int i=0;i<n;i++)
    scanf("%d",&B[i]);
    printf("\nThe array of sum of the corresponding elements of both arrays is given by : \n");
    C=fun(A,B,n);
    for(int i=0;i<n;i++)
    printf("%d ",C[i]);
    free(C);
    return 0;
}
