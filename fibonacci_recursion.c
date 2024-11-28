// Simple recursive function to print fibonacci series upto n(Entered by the user)

#include <stdio.h>
int fib(int n,int a,int b)
{
    if(n==0) return 0;
    printf(" %d",a+b);
    fib(n-1,b,a+b);
}
int main()
{
    int n;
    printf("Enter the number to display fibonacci series \n");
    scanf("%d",&n);
    printf("\nThe fibonacci series upto the number is given by : \n");
    printf("0 1");
    fib(n-2,0,1);
    return 0;
}
