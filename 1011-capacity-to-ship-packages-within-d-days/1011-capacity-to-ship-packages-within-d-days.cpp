class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int start = 0, end = 0;
        for(int i =0;i<n;i++){
            end+=weights[i];
            if(start<weights[i]){
                start = weights[i];
            }
        }
        int ans = end;
        while(start<=end){
            int mid = end + (start-end)/2;
            int weight=0, count =1;
            for(int i=0;i<n;i++){
                weight+=weights[i];
                if(weight>mid){
                    count++;
                    weight=weights[i];
                }
            }
            if(count<=days){
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