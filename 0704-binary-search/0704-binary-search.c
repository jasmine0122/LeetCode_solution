int search(int* nums, int numsSize, int target) {
    int high = numsSize-1; 
    int low = 0; 
 
    while(low <= high){ 
        int mid = low + (high-low)/2; 
        if(nums[mid] < target) 
            low++;
        else if(nums[mid] > target) 
            high--; 
        else 
            return  mid; 
    } 
    return -1;  
}