bool increasingTriplet(int* nums, int numsSize) {
    int first = INT_MAX, second = INT_MAX;
    
    for(int i=0; i<numsSize; i++){
        if(nums[i] < first){
            first = nums[i];
        }
        else if(nums[i] < second && nums[i] != first){
            second = nums[i];
        }
        else if(nums[i] > second)
            return 1;
    }
    return 0;
}