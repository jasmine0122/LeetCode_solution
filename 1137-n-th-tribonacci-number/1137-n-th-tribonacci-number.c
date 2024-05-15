int tribonacci(int n){
    int dp[n+3];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    
    if(n == 0 || n == 1 || n == 2)
        return dp[n];
    
    int i = 3;
    while(i <= n){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        i++;
    }
    return dp[n];    
}