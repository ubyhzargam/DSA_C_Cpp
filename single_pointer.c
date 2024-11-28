// Basic referecing and dereferencing operation on a single pointer - 

#include <stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("The address of pointer is given by : %d \n",p);
    printf("The address of pointer can also be accessed like this : %d \n ",&a);
    printf("The value pointed by the pointer is given by : %d \n ",*p);
    printf("The address of the pointer is given by : %d \n ",&p);
    printf("The address pointed by pointer can also be accessed like this : %d \n ",*(&p));
    return 0;
}
