// You are given a 0-indexed integer array nums and an integer k.

// Return an integer that denotes the sum of elements in nums whose corresponding indices have exactly k set bits in their binary representation.

// The set bits in an integer are the 1's present when it is written in binary.

// Logic

int sumIndicesWithKSetBits(int* nums, int numsSize, int k) 
{
    int *hash=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++)
    hash[i]=0;
    for(int i=0;i<numsSize;i++)
    {
        int x=i;
        while(x>0)
        {
            if(x&1==1)hash[i]++;
            x=x>>1;
        }
    }
    int sum=0;
    for(int i=0;i<numsSize;i++)
    if(hash[i]==k)
    sum+=nums[i];
    return sum;
}
