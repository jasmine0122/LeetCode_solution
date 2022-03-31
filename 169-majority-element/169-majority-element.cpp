class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int L = nums.size()/2;
        
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
            
            if(m[nums[i]] > L)
                return nums[i];
        }
        return {};
    }
};