class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        int left = 0,right = 0;
        for(int i=1 ; i<n ; i++)
        {
            right = i;
            if(prices[right] < prices[left])
            {
                left = right;
            }
            else {
                ans = max(ans, prices[right] - prices[left]);
            }
        }
        return ans;
    }
};