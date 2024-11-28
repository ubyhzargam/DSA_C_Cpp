// Simple recursion function to calculate power of a number to another number 

#include <stdio.h>
int power(int n,int p)
{
    if(p==0) return 1;
    return n*power(n,p-1);
}
int main()
{
    int n;
    printf("Enter the number to calculate the power \n");
    scanf("%d",&n);
    int p;
    printf("\n Enter the power to which the number should be raised to : \n");
    scanf("%d",&p);
    int po=power(n,p);
    printf("\nThe power of %d to %d is %d",n,p,po);
    return 0;
}
