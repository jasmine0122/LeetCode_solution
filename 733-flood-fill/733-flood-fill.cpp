class Solution {
public:
    int val = -1;
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(val == -1)
            val = image[sr][sc];
        
        if(image.empty() || sr<0 || sc<0  || sr == image.size() || sc == image[0].size() || val == newColor || image[sr][sc] != val )
            return image;
            
        image[sr][sc] = newColor;
        floodFill(image, sr-1, sc, newColor);
        floodFill(image, sr+1, sc, newColor);
        floodFill(image, sr, sc-1, newColor);
        floodFill(image, sr, sc+1, newColor); 
        return image;
    }
};