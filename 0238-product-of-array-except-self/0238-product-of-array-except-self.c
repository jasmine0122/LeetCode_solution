/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* prefix = malloc(numsSize*sizeof(int));
    prefix[0] = 1;
    
    for(int i=1; i<numsSize; i++){
        prefix[i] = 1;
        prefix[i] = prefix[i-1]*nums[i-1];
    }

    int temp = nums[numsSize-1];
    // printf("%d\n", temp);
    for(int i=numsSize-2; i>=0; i--){
        prefix[i] *= temp;
        temp *= nums[i];
    }
    return prefix;
}