int removeDuplicates(int* nums, int numsSize) {
    int tmp = nums[0], idx = 0;
    
    nums[idx] = tmp;
    for(int i=1; i<numsSize; i++){
        if(tmp != nums[i]){
            nums[++idx] = nums[i];
            tmp = nums[i];
        }
    }
    return idx+1;
}