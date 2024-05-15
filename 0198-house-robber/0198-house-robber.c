int rob(int* nums, int numsSize) {
    if(numsSize == 1)
        return nums[0];
    else if(numsSize == 2)
        return fmax(nums[0], nums[1]);
    
    int dp[numsSize], max = 0;
    dp[0] = nums[0];
    dp[1] = fmax(nums[0], nums[1]);
    
    int i = 2;
    while(i < numsSize){
        dp[i] = fmax(dp[i-1], nums[i] + dp[i-2]);
        i++;
    }
    return fmax(dp[numsSize-1], dp[numsSize-2]);
}