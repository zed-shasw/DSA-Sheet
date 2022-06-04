class Solution{
    public:
    // Function to check if given number n is a power of two.
    
    bool isPowerofTwo(long long n){
    // If we subtract a power of 2 numbers by 1 then all unset bits after
    // the only set bit become set; and the set bit becomes unset.
    // For example for 4 ( 100) and 16(10000), we get the following after subtracting 1 
    // 3 --> 011 
    // 15 --> 01111
    
        if(n==0) return false;
        bool ans = n&(n-1);
        return !ans;
    }
};