class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=0, e=0, minSize=numeric_limits<int>::max();
        int sum=0;
        
        while(e < nums.size()){
            sum += nums[e];
            while(sum >= target && s<=e){
                minSize = min(minSize, e-s+1);
                sum -= nums[s];
                s++;
            }
            e++;
        }
        if(minSize == numeric_limits<int>::max())
            return 0;
        else
            return minSize;
    }
};