// You are given an integer array nums, and an integer k. Let's introduce K-or operation by extending the standard bitwise OR. In K-or, a bit position in the 
// result is set to 1 if at least k numbers in nums have a 1 in that position.

// Return the K-or of nums.

int findKOr(int* nums, int numsSize, int k) 
{
    int *hash=(int *)malloc(sizeof(int)*33);

    for(int i=0;i<=32;i++)
    hash[i]=0;
    int c=0;
    for(int i=0;i<numsSize;i++)
    {
        c=0;
        while(c<32)
        {
            if((nums[i]>>c)&1)hash[c]++;
            c++;
        }
    }
    c=0;
    for(int i=31;i>=0;i--)
    {
    c=c<<1;
    c=(hash[i]>=k)?(1|c):c;
    }
    return c;
}
