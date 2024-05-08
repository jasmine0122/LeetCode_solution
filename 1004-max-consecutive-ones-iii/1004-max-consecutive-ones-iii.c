int longestOnes(int* nums, int numsSize, int k) {
    int left = 0, right = 0;
    
    while(right < numsSize){
        if(nums[right] == 0){
            k--;
        }
        if(k < 0){
            if(nums[left] == 0)
                k++;
            left++;
        }
        right++;
    }
    return right - left;
}
