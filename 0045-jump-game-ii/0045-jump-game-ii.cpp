class Solution {
public:
    int jump(vector<int>& nums){
        int n = nums.size()-1;
        int step = 0;
        int max = 0, end = 0;
        
        for(int i=0; i<n; i++){
            if(i+nums[i] > max)
                max = i+nums[i];
            
            if(i == end){
                end = max;
                step++;
            }
            
        }
       
        return step;
    }
};