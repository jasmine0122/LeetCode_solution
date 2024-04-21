// Kanade's Algorithm
int maxSubArray(int* nums, int numsSize) {
    int sum=0, max=-10000;
    
    for(int i=0; i<numsSize; i++){
        if(sum + nums[i] >= nums[i])
            sum += nums[i];
        else
            sum = nums[i];

        if(sum > max)
            max = sum;
    }
    return max;
}