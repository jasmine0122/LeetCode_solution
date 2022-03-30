class Solution {
public:
    int maxArea(vector<int>& height) {
        int M = 0;
        int L = 0, R = height.size()-1;
        
        while(L < R){
            M = max(M, min(height[L], height[R])*(R - L));
            if(height[L] <= height[R]){
                while(height[L+1] < height[L+1])
                    L++;
                L++;
            }
            else if(height[L] > height[R]){
                while(height[R-1] < height[R])
                    R--;
                R--;
            }
            else{
                L++;
                R--;
            }
        }
        return M;
    }
};