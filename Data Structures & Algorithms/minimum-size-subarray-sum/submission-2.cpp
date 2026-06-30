class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int left=0,right=0;
        int n=nums.size();
        int sum=0;
        while(right<n){
            if(sum<target){
                sum+=nums[right];
                
            }
            while(sum>=target){
                ans=min(ans,right-left+1);
                sum-=nums[left];
                left++;
            }
            right++;
            
        }
        if(ans==INT_MAX) ans=0;
        return ans;
    }
};