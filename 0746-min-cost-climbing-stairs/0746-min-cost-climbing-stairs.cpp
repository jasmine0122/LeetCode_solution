class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size() == 2)
        return min(cost[0], cost[1]);

        int dp[cost.size()];
        dp[0] = cost[0];
        dp[1] = cost[1];  
        int i=2;
        
        while(i < cost.size()){
            dp[i] = min((cost[i]+dp[i-1]), (cost[i]+dp[i-2]));
            i++;
        }
        
        return min(dp[cost.size()-1], dp[cost.size()-2]);
    }
};