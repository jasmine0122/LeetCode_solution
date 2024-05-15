int minCostClimbingStairs(int* cost, int costSize) {
    if(costSize == 2)
        return fmin(cost[0], cost[1]);

    int min = INT_MAX;
    int dp[costSize];
    dp[0] = cost[0];
    dp[1] = cost[1];    
    int i = 2;   
    
    while(i < costSize){
        dp[i] = fmin(cost[i] + dp[i-1], cost[i] + dp[i-2]);
        i++;
    }
    return fmin(dp[costSize-1], dp[costSize-2]);
}