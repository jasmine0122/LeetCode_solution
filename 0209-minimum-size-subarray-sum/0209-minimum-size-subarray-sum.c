int minSubArrayLen(int target, int* nums, int numsSize) {
    int sum = 0, ans = INT_MAX;
    int p1 = 0, p2 = 0;
    
    while(p2 < numsSize){
        // printf("%d %d %d\n", p1, p2, sum);
        sum += nums[p2];
        while(sum >= target){
            sum -= nums[p1];
            ans = (ans > p2-p1+1 ? p2-p1+1 : ans);
            p1++;
        }
        p2++;
    }
    return (ans == INT_MAX ? 0 : ans);
}