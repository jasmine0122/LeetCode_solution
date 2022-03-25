class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> n;

        for(int i=0; i<size(nums); i++)
            if(n.count(target-nums[i]))
                return {i, n[target-nums[i]]};
            else
                n[nums[i]] = i;
        return {};
    }
};