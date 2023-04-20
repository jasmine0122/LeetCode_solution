class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> tmp1 = nums1;
        vector<int> tmp2 = nums2;
        int n = size(nums1);
        
        if(size(nums1) > size(nums2)){
            n = size(nums2);
            tmp1 = nums2;   
            tmp2 = nums1;  
        }

        for(int i=0; i< n; i++)
            if(find(tmp2.begin(), tmp2.end(), tmp1[i]) != tmp2.end() && 
               find(ans.begin(), ans.end(), tmp1[i]) == ans.end())
                ans.push_back(tmp1[i]);
        return ans;
    }
};