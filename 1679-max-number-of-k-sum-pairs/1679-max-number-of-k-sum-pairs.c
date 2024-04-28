int cmp(const void *p, const void *q){
    return *(int *)p - *(int *)q;
}

int maxOperations(int* nums, int numsSize, int k){
    int p1 = 0, p2 = numsSize-1;
    int count = 0;
    
    qsort(nums, numsSize, sizeof(int), cmp);
    
    while(p1 < p2){
        if(nums[p1] + nums[p2] == k){
            count++;
            p1++; p2--;
        }
        else if(nums[p1] + nums[p2] < k){
            p1++;
        }
        else
            p2--;
    }
    return count;
}