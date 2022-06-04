class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int totalXOR = 0;
        for(auto x: nums) totalXOR ^= x;
        int flag = totalXOR & ~(totalXOR-1);
        int a = 0, b = 0;
        for(auto x: nums)
        {
            if(x&flag) a ^= x;
            else b ^= x;
        }
        if(a>b) swap(a,b);
        return {a,b};
    }
};