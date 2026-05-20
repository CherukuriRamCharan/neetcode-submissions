class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int cnt=1;
        int p1=0,p2=1;
        while(p1<p2 && p2<n){
           if(nums[p1]==nums[p2]){
            p2++;
           }
           else{
            nums[p1+1]=nums[p2];
            p1++;
            p2++;
            cnt++;
           }
        }
        return cnt;
    }
};