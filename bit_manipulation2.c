// You are given an array of positive integers nums.

// You have to check if it is possible to select two or more elements in the array such that the bitwise OR of the selected elements has at least one trailing
// zero in its binary representation.

bool hasTrailingZeros(int* nums, int numsSize) 
{
    int count=0;
    for(int i=0;i<numsSize;i++)
    if((nums[i]&1)==0) count++;

    return (count>=2);
}
