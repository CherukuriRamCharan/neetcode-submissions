class Solution {
public:
    vector<vector<int>> Func(int idx,vector<vector<int>>& ans,vector<int>v,vector<int>& nums,int n){
        if(idx>=n){
            // for(int i=0;i<v.size();i++){
                ans.push_back(v);
            // }
            return ans;
        }

        v.push_back(nums[idx]);
        Func(idx+1,ans,v,nums,n);
        v.pop_back();
        Func(idx+1,ans,v,nums,n);
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int>v;
        // ans=
        Func(0,ans,v,nums,n);
        return ans;
    }
};
