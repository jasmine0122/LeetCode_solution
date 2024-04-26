int cmp(const void *p, const void *q){
    return *(int*)p - *(int*)q;
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    return nums[numsSize/2];
}