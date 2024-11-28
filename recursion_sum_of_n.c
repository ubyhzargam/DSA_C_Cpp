// Simple recursive function to calculate sum of n natural numbers 

#include <stdio.h>
int sum_n_nat(int n)
{
    if(n==0)
    return 0;
    return n+sum_n_nat(n-1);
}
int main()
{
    int n;
    printf("Enter the number of first n natural numbers to find the sum for : \n ");
    scanf("%d",&n);
    int sum=sum_n_nat(n);
    printf("\nThe number of first %d natural numbers is %d \n",n,sum);
    return 0;
}
