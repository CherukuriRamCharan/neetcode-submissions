class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1=0,p2=1;
        vector<int> ans;
        int n=numbers.size();
        while(p1<p2){
            int sum=numbers[p1]+numbers[p2];
            if(sum==target){
                ans.push_back(p1+1);
                ans.push_back(p2+1);
                break;
            }
            else if(sum<target){
                if(p2==n-1){
                    p1++;
                    p2=p1+1;
                }
                else
                p2++;
            }
            else if(sum>target){
                p1++;
                p2=p1+1;
            }
        }

        return ans;
    }
};
