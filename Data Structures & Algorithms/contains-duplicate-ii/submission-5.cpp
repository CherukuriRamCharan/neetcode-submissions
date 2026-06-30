class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      bool b = false;
      int n = nums.size();
      int left=0,right=0;
      unordered_map<int,int> um;
      while(right<n){
        if(um.find(nums[right])!=um.end()){
            int curr = um[nums[right]];
            if(nums[right]==nums[curr] && abs(curr-right)<=k){
                b=true;
                break;
            }
            left = max(left,um[nums[right]]+1);
        }
        um[nums[right]]=right;
        right++;
      }

      return b;
    }
};