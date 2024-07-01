/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void quickSort(int* nums, int s, int e){
    if(s < e){
        int i = s-1, j = e+1;
        int mid = nums[(s+e)/2];
        
        while(1){
            while(nums[++i] < mid);
            while(nums[--j] > mid);
            
            if(i >= j)
                break;
            
            swap(&nums[i], &nums[j]);
        }
        
        quickSort(nums, s, i-1);
        quickSort(nums, j+1, e);
    }
}

int* sortArray(int* nums, int numsSize, int* returnSize) {
    quickSort(nums, 0, numsSize-1);
    *returnSize = numsSize;
    
    return nums;
}