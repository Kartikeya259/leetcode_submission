class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n, vector<int>(n,0));
        int top=0;
        int bottom = n-1;
        long long left=0;
        int right=n-1;
        int num =1;
        
        while(top<=bottom && left<=right){
            
            for(int i=left;i<=right;i++){
                arr[top][i]=num;
                num++;
            }
            top++;
            for(int i=top;i<=right;i++){
                arr[i][right]=num;
                num++;
            }
            right--;
            for(int i=right;i>=left;i--){
                arr[bottom][i]=num;
                num++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                arr[i][left]=num;
                num++;
            }
            left++;

        }
        return arr;
    }
};