class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int>ans;
        map<int,int> um;
        int n=nums.size();
        for(int i=0;i<n;i++){
            um[nums[i]]++;
        }
        for(auto i:um){
            pq.push({i.second,i.first});
        }
        int j=0;
        while(j<k){
            auto x=pq.top();
            ans.push_back(x.second);
            pq.pop();
            j++;
        }
        return ans;
    }
};
