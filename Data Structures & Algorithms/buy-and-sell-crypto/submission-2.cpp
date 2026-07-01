class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans=0;
        int left=0,right=0;
        while(right<n){
            int profit = prices[right] - prices[left];
            while(prices[right]<prices[left]){
                left++;
            }
            ans=max(ans,profit);
            right++;
        }

        return ans;
    }
};
