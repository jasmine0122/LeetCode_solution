class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> occur;
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++) {
            if (nums[i] == x)
                occur.push_back(i);
        }
    
        for(int q : queries) {
            if (occur.size() < q)
                ans.push_back(-1);
            else
                ans.push_back(occur[q-1]); 
        }
    
        return ans;
    }
};