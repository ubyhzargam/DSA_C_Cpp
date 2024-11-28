// Simple recursive function to caluclate the factorial of a number

#include <stdio.h>
int fact(int n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the number to calculate the factorial \n");
    scanf("%d",&n);
    int fac=fact(n);
    printf("\nThe factorial of %d is %d",n,fac);
    return 0;
}
