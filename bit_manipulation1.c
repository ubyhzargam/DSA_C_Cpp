// You are given an array nums of non-negative integers and an integer k.

// An array is called special if the bitwise OR of all of its elements is at least k.

// Return the length of the shortest special non-empty subarray of nums, or return -1 if no special subarray exists.

int minimumSubarrayLength(int* nums, int numsSize, int k) 
{
    int x=0;
    int count=0;
    int min=100;
    for(int i=0;i<numsSize;i++)
    {   x=0;
        count=0;
        for(int j=i;j<numsSize;j++)
        {
            x=x|nums[j];
            count++;
            if(x>=k)min=(count<min)?count:min;
        }
    }
    if(min!=100)
    return min;
    return -1;
}
