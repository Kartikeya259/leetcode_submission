class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n =matrix.size();
        vector<vector<int>> rotate(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rotate[i][j]=matrix[(n-j)-1][i];
            }
        }
        matrix=rotate;
        // for(int i=0;i<n;i++){
        //     reverse(matrix[i].begin(),matrix[i].end());
        // }
    }
};