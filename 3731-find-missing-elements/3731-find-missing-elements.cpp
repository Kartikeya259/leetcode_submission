class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        double first = nums[0];
        double end=nums[nums.size()-1];
        for(double i=first;i<=end;i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};