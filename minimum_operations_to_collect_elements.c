// You are given an array nums of positive integers and an integer k.

// In one operation, you can remove the last element of the array and add it to your collection.

// Return the minimum number of operations needed to collect elements 1, 2, ..., k.

// Logic 

int minOperations(int* nums, int numsSize, int k) 
{
    int sum=(k*(k+1)/2);
    int count=0;
    int *hash=(int*)malloc(sizeof(int)*(k+1));
    for(int i=0;i<=k;i++)
    hash[i]=1;

    for(int i=numsSize-1;i>=0;i--)
    {
        count++;
        if(nums[i]>k) continue;
        if(hash[nums[i]]!=0)
        {
        sum=sum-nums[i];hash[nums[i]]--;
        }
        if(sum==0)break;
    }
    return count;

}
