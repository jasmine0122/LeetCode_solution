//Use XOR
int singleNumber(int* nums, int numsSize) {
    int ans = 0;
    
    for (int i=0; i<numsSize; i++) {
        ans = ans ^ nums[i];
        // printf("%d ", ans);
    } 
    // printf("\n");
    return ans;
}