// 
int longestSubarray(int* nums, int numsSize) {
    int right = 0, left = 0;
    int zero = 0, max = 0;
    
    while(right < numsSize){
        if(nums[right] == 0){
            zero++;
        }
        while(zero > 1){
            if (nums[left] == 0)
                zero--;
            left++;
        }
        max = fmax(max, right - left + 1 - zero);
        right++;
    }
    return (max==numsSize) ? max-1 : max;
}