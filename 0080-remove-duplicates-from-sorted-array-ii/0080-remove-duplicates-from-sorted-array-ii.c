int removeDuplicates(int* nums, int numsSize) {
    int idx = 1;
    
    for(int i=1; i<numsSize; i++){
        if(idx == 1 || nums[idx-2] != nums[i]){
            nums[idx] = nums[i];
            idx++;
        }    
    }
    return idx;
}