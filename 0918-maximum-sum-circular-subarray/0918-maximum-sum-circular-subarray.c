int maxSubarraySumCircular(int* nums, int numsSize) {
    int sum = 0, max = INT_MIN, min = INT_MAX, curMax = 0, curMin = 0;
    
    for(int i=0; i<numsSize; i++){
        if(nums[i] + curMax >= nums[i])
            curMax += nums[i];
        else
            curMax = nums[i];
        
        if(nums[i] + curMin <= nums[i])
            curMin += nums[i];
        else
            curMin = nums[i];        
        
        max = fmax(curMax, max);
        min = fmin(curMin, min);
        
        sum += nums[i];
    }
    
    // printf("%d %d %d %d %d\n", sum, max, curMax, min, curMin);
    if(sum - min == 0)
        return max;
    return max < sum-min ? sum-min : max;
}