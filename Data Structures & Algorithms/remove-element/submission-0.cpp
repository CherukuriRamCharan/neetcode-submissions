class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),cnt=0;
        int left=0,right=n-1;
        while(left<=right){
            if(nums[right]==val){
                cnt++;
                right--;
            }
            else if(nums[left]==val){
                swap(nums[left],nums[right]);
                cnt++;
                left++;
                right--;
            }
            else{
                left++;
            }
        }

        return n-cnt;
    }
};