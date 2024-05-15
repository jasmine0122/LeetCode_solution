int rob(int* nums, int numsSize) {
    if(numsSize == 1)
        return nums[0];
    else if(numsSize == 2)
        return fmax(nums[0], nums[1]);
    
    int dp[numsSize], max = 0;
    dp[0] = nums[0];
    dp[1] = nums[1];
    
    int i = 2;
    while(i < numsSize){
        dp[i] = 0;
        int j = i-2;
        while(j >= 0){
            dp[i] = fmax(nums[i]+ dp[j], dp[i]);
            j--;
        }
        max = fmax(dp[i], dp[i-1]);
        i++;
    }
    return max;
}