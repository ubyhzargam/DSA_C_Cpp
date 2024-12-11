// You are given two positive integers n and k.

//You can choose any bit in the binary representation of n that is equal to 1 and change it to 0.

// Return the number of changes needed to make n equal to k. If it is impossible, return -1.

// Logic 

int minChanges(int n, int k) 
{
    int x=0;
    if(n==k)return 0;
    while(n>0||k>0)
    {
        if(((n&1)==0)&&((k&1)==1))return -1;
        else if(((n&1)==1)&&((k&1)==0)) x++;
        n=n>>1;
        k=k>>1;
    }
    if(x!=0)return x;
    else return -1;
}

