class Solution {
  public:
    int findPosition(int n) {
        // code here
        bool flag = true;
        int cnt2 = 0, pos = 0, i=1;
        while(n)
        {
            if(n&1) {
                cnt2++;
                if(flag)
                {
                    flag = false;
                    pos = i;
                }
            }
            n >>= 1;
            i++;
        }
        int ans = (cnt2==1) ? pos : -1;
        return ans;
    }
};