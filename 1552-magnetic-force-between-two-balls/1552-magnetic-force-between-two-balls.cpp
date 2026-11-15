class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int start = 1, end = position[n-1]-position[0];
        int ans;
        while(start<=end){
            int mid= end+(start-end)/2;
            int bucket=position[0],count=1;
            for(int i=0;i<n;i++){
                if(bucket+mid<=position[i]){
                    count++;
                    bucket=position[i];
                }
            }
            if(count<m){
                end=mid-1;
            }
            else{
                ans=mid;
                start = mid+1;
            }
        }
        return ans;
    }
};