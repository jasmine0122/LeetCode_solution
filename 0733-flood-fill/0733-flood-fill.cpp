class Solution {
public:
    int val = -1;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(val == -1)
            val = image[sr][sc];
        if(sr<0 || sc<0 || sc==image[0].size() || sr==image.size() || image[sr][sc]==color || image[sr][sc]!=val)
            return image;
        
        image[sr][sc] = color;
        floodFill(image, sr-1, sc, color);
        floodFill(image, sr, sc-1, color);
        floodFill(image, sr+1, sc, color);
        floodFill(image, sr, sc+1, color); 
        return image;
    }
};