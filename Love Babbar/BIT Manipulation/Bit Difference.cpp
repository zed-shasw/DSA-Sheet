class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int setBits(int N) {
        int ans = 0;
        while(N)
        {
            if(N&1) ans++;
            N >>= 1;
        }
        return ans;
    }
    
    int countBitsFlip(int a, int b){
        int aXORb = a^b;
        return setBits(aXORb);
    }
};