class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int count=0,result=0;

      for(int num:nums){
        if(count==0){
            result=num;
        }
        if(result==num){
            count++;
        }
        else{
            count--;
        }
      }

      return result;
    }
};