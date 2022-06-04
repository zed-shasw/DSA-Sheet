class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    
    int largestPowerOf2(int n)
    {
        int ans = 0;
        while((1<<ans) <= n) ans++;
        return ans-1;
    }
    
    int countSetBits(int n)
    {
        if(n==0) return 0;
        int x = largestPowerOf2(n);
        int uptoLargestPowerOf2 = x*(1<<(x-1));
        int leftmost1s = n-(1<<x) + 1;
        int rest = n - (1<<x);
        int ans = uptoLargestPowerOf2+leftmost1s+countSetBits(rest);
        return ans;
    }
};