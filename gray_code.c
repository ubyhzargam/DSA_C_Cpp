// An n-bit gray code sequence is a sequence of 2n integers where:

// Every integer is in the inclusive range [0, 2n - 1],
// The first integer is 0,
// An integer appears no more than once in the sequence,
// The binary representation of every pair of adjacent integers differs by exactly one bit, and
// The binary representation of the first and last integers differs by exactly one bit.
// Given an integer n, return any valid n-bit gray code sequence.

// Logic

int* grayCode(int n, int* returnSize) 
{
    *returnSize = pow(2,n);
    int *arr=(int *)malloc(sizeof(int)*(*returnSize));
    int *gray=(int *)malloc(sizeof(int)*(*returnSize));

    for(int i=0;i<(*returnSize);i++)
    arr[i]=i;

    for(int i=0;i<(*returnSize);i++)
    {
        int j=n-1;
        gray[i]=(arr[i]>>j)&1;
        while(j>0)
        {
            gray[i]=gray[i]<<1;
            int x=(arr[i]>>j)^(arr[i]>>(j-1));
            gray[i]=gray[i]|x;
            j--;
        }
    }
    return gray;
}
