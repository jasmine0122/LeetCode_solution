class Solution {
public:
    int area=0, max=0;
    
    void search(vector<vector<int>>& grid, int i, int j){
        if(i<0 || j<0 || i==grid.size() || j==grid[0].size() || grid[i][j] == 0)
            return;
        
        area += 1;
        grid[i][j] = 0;
        search(grid, i-1, j);
        search(grid, i, j-1);
        search(grid, i, j+1);
        search(grid, i+1, j);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n1=grid.size(), n2=grid[0].size();
        
        for(int i=0; i<n1; i++){
             for(int j=0; j<n2; j++) {
                 if(grid[i][j] == 1){
                     search(grid, i, j);
                     if(area > max)
                        max = area;
                 }
                 area = 0;
             }
        }
        return max;
    }
};