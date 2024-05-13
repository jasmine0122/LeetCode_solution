class Solution {
public:
    int maxScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int Max = INT_MIN;
        vector<int> Min(n, INT_MAX);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(j > 0){
                    Min[j] = min(Min[j], Min[j-1]);
                }
                // cout<<grid[i][j]<<" "<<Min[j]<<endl;
                Max = max(Max, grid[i][j]-Min[j]);
                Min[j] = min(Min[j], grid[i][j]);
            }
        }
        return Max;
    }
};