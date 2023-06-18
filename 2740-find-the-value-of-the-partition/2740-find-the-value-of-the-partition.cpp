class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = 1e9;
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i]-nums[i-1] < min)
                min = nums[i]-nums[i-1];
        }
        return min;
    }
};