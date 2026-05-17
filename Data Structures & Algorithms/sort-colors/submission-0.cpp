class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> a;
        int zero_cnt=0,one_cnt=0,two_cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero_cnt++;
                a.push_back(nums[i]);
            }
            else if(nums[i]==1){
                one_cnt++;
            }
            else{
                two_cnt++;
            }
        }

        for(int i=0;i<one_cnt;i++){
            a.push_back(1);
        }
        for(int i=0;i<two_cnt;i++){
            a.push_back(2);
        }

        for(int i=0;i<a.size();i++){
            nums[i]=a[i];
        }
    }

};