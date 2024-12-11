// You are given an array nums, where each number in the array appears either once or twice.
// Return the bitwise XOR of all the numbers that appear twice in the array, or 0 if no number appears twice.

// Logic 

int duplicateNumbersXOR(int* nums, int numsSize) 
{
    int *hash=(int*)malloc(sizeof(int)*51);
    for(int i=0;i<=50;i++)
    hash[i]=0;

    int x=0;
    for(int i=0;i<numsSize;i++)
    hash[nums[i]]++;

    for(int i=0;i<=50;i++)
    if(hash[i]==2) x=x^i;

    return x;
}
