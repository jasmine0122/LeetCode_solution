class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int L = nums.size();
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k%L);
        reverse(nums.begin() + k%L, nums.end());
    }
};