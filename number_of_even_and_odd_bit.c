// Let even denote the number of even indices in the binary representation of n with value 1.

// Let odd denote the number of odd indices in the binary representation of n with value 1.

// Note that bits are indexed from right to left in the binary representation of a number.

// Return the array [even, odd].

int* evenOddBit(int n, int* returnSize) 
{
    int *arr=(int *)malloc(sizeof(int)*2);
    arr[0]=0;
    arr[1]=0;
    *returnSize=2;
    int i=0;
    while(n>0)
    {
        if(i%2==0)
        {
            if(n&1==1)arr[0]++;
        }
        else
        {
            if(n&1==1)arr[1]++;
        }
        i++;
        n=n>>1;
    }
    return arr;
}
