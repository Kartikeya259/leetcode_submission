class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> xaxis;
        vector<int> ans;
        for(int i=0;i<points.size();i++){
            
                xaxis.push_back(points[i][0]);
            
        }
        sort(xaxis.begin(),xaxis.end());
        for(int i=1;i<xaxis.size();i++){
            ans.push_back(xaxis[i]-xaxis[i-1]);
        }
        int result = *max_element(ans.begin(),ans.end());
        return result;
    }
};