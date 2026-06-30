class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left=0,right=0;
        unordered_map<char,int> um;
        int ans=0;
        while(right<n){
            if(um.find(s[right])!=um.end()){
                left=max(left,um[s[right]]+1);
            }
             ans=max(ans,right-left+1);
            um[s[right]]=right;
            right++;
        }

        return ans;
    }
};
