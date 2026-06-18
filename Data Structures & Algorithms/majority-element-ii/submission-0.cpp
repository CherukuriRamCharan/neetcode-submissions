class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }

        for(auto i:um){
            if(i.second > n/3){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};