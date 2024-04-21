// Dynamic Programming Approach(tabulation)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dp[nums.size()];
        int sum = nums[0];
            
        dp[0] = nums[0];
        for(int i=1; i<nums.size(); i++){
            dp[i] = nums[i] + (dp[i-1]>0 ? dp[i-1] : 0);
            sum = max(dp[i], sum);
        }
        return sum;
    }
};