class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        int start = 1,end = piles[n-1];
        int ans;
        while(start<=end){
            int mid=end+(start-end)/2;
            int count=0;
            for(int i=0;i<n;i++){
                if(piles[i]%mid==0){
                    count = count+ piles[i]/mid;
                }
                else{
                    count=count+(piles[i]/mid)+1;
                }
            }
            if(count<=h){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};