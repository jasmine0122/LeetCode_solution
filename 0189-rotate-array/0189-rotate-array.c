void reverse(int* nums, int i, int j){
    for(; i<j; i++, j--){
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
}

void rotate(int* nums, int numsSize, int k) {
    reverse(nums, 0, numsSize-1);
    reverse(nums, 0, k%numsSize-1);
    reverse(nums, k%numsSize, numsSize-1);
}