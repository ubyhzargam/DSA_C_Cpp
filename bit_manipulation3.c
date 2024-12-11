// You are given a 0-indexed integer array nums. A pair of integers x and y is called a strong pair if it satisfies the condition:

// |x - y| <= min(x, y)
// You need to select two integers from nums such that they form a strong pair and their bitwise XOR is the maximum among all strong pairs in the array.

// Return the maximum XOR value out of all possible strong pairs in the array nums.

// Note that you can pick the same integer twice to form a pair.

int maximumStrongPairXor(int* nums, int numsSize) 
{
    int min=0;
    int diff=0;
    int xor=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            min=(nums[i]>nums[j])?nums[j]:nums[i];
            diff=(nums[i]>nums[j])?(nums[i]-nums[j]):(nums[j]-nums[i]);
            if(diff<=min)
            xor=((nums[i]^nums[j])>xor)?nums[i]^nums[j]:xor;
        }
    }
    return xor;
}
