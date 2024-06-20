class Solution {
public:
    int jump(vector<int>& nums){
        int n = nums.size()-1;
        int step = 0, s = 0, e = 0; //start, end
        
        while(e < n){
            step++;
            int max = 0;
            for(int i=s; i<=e; i++){
                if(i+nums[i] >= n)
                    return step;
                if(i+nums[i] > max)
                    max = i+nums[i];
            }
            s = e+1;
            e = max;
        }
        return step;
    }
};