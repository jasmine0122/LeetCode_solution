bool canJump(int* nums, int numsSize) {
    int max = 0;
    
    for(int i=0; i<numsSize; i++){
        if(max >= numsSize-1)
            return 1;
        if(nums[i] == 0 && max == i)
            return 0;
        
        if(i+nums[i] > max){
            max = i+nums[i];
        }
    }
    return 0;
}