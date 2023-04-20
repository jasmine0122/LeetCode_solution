class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> tmp(nums1.begin(), nums1.end());
        vector<int> ans;

        for(auto a : nums2)
            if(tmp.count(a)){
                ans.push_back(a); 
                tmp.erase(a);
            }   
        return ans;
    }
};