class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int ans = 0;
        while(N)
        {
            if(N&1) ans++;
            N >>= 1;
        }
        return ans;
    }
};