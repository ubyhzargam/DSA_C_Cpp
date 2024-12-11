// Return the smallest number x greater than or equal to n, such that the binary representation of x contains only set bits

// Logic 
int smallestNumber(int n) 
{
    int x=1;
    while(x<n)
    {
        x=((x<<1)|1);
    }
    return x;
}
