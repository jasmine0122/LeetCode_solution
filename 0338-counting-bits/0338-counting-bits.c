/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n+1;
    int* dp = (int*)malloc(sizeof(int)*(*returnSize));
    dp[0] = 0;
    
    if(n >= 1){
        dp[1] = 1;
    }
    if(n > 1){
        int j = 2;
        for(int i=2; i<=n ;i++){
            if(i == j*2)
                j = i;
            dp[i] = dp[i-j]+1;
        }
    }
    return dp;
}