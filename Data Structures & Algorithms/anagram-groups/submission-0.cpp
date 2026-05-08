class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int n=strs.size();
        unordered_map<string,vector<string>> um;
        for(auto str:strs){
            string s1=str;
            sort(str.begin(),str.end());
            um[str].push_back(s1);
        }
        for(auto i:um){
            res.push_back(i.second);
        }
      return res;
    }
};
