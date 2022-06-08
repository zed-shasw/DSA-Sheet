class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> pq;
        for(int i=0; i<r+1; i++)
        {
            if(pq.size()==k)
            {
                if(pq.top() > arr[i])
                {
                    pq.pop();
                    pq.push(arr[i]);
                }
            } else pq.push(arr[i]);
        }
        return pq.top();
    }
};