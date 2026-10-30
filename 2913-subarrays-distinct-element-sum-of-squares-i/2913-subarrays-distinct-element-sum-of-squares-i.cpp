class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        vector<bool> visited(101, false);

for(int i = 0; i < nums.size(); i++)
{
    int count = 0;
    fill(visited.begin(), visited.end(), false);

    for(int j = i; j < nums.size(); j++)
    {
        if(visited[nums[j]] == false)
        {
            count++;
            visited[nums[j]] = true;
            
        }
         ans += count * count;
    }
   
}
return ans;
    }
};