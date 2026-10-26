class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum=0;
        vector<int> digitSum;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
            sum += nums[i]%10;
            nums[i]/=10;
            }
            digitSum.push_back(sum);
            sum=0;
        }
        int ans = *min_element(digitSum.begin(),digitSum.end());
        return ans;
    }
};