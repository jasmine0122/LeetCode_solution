class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> Map1, Map2;
        vector<vector<int>> ans(2);
        
        for(int i: nums1)
           Map1[i]++;
        for(int i: nums2)
           Map2[i]++;
        
        for(int i: nums1){
            if(Map1[i] > 0 && Map2.count(i) == 0)
                ans[0].push_back(i);
            Map1[i] = -1;
        }
        for(int i: nums2){
            if(Map2[i] > 0 && Map1.count(i) == 0)
                ans[1].push_back(i);
            Map2[i] = -1;
        }
        return ans;        
    }
};