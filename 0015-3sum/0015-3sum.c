/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int cmp(const void *p, const void *q){
    int A = *(int *)p;
    int B = *(int *)q;
    if(A == B) return 0;
    return A > B ? 1 : -1;   
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), cmp);
    *returnSize = 0;
    *returnColumnSizes = (int*)malloc(sizeof(int) * numsSize * numsSize);
    int** ans = (int**)malloc(sizeof(int) * numsSize * numsSize);
    
    for(int i=0; i<numsSize-2; i++){
        if(i > 0 && nums[i] == nums[i-1])
            continue;
        int l = i+1;
        int r = numsSize-1;
        
        while(l < r){
            if(nums[i]+nums[l]+nums[r] == 0){
                ans[(*returnSize)] = malloc(sizeof(int) * 3);
                (*returnColumnSizes)[(*returnSize)] = 3;
                ans[(*returnSize)][0] = nums[i];
                ans[(*returnSize)][1] = nums[l];
                ans[(*returnSize)][2] = nums[r];
                (*returnSize)++;
                l++;
                
                while(l < r && nums[l] == nums[l-1]){
                    l++;
                }
            }
            else if(nums[i]+nums[l]+nums[r] < 0){
                l++;
            }
            else
                r--;
        }
    }
    
    return ans;
}