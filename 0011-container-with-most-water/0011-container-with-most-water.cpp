class Solution {
public:
    int maxArea(vector<int>& height) {
        int L=0, R=height.size()-1, area=0;
        
        while(L < R){
            area = max(min(height[L], height[R])*(R-L), area);
            if(height[L] < height[R]){
                L++;
            }
            else
                R--;
        }
        return area;
    }
};