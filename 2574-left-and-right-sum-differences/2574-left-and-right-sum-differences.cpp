class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum1 =0, sum2=0;
        vector<int> ans;
        for(int i=0;i<=nums.size()-1;i++){
            for(int j=nums.size()-1;j>i;j--){
                sum2=sum2+nums[j];
            }
            ans.push_back(abs(sum1-sum2));
            sum1=sum1+nums[i];
            sum2=0;
        }
        return ans;
    }
};