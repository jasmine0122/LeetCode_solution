class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> ans;
        sort(potions.begin(), potions.end());
        
        for(int i=0; i<n; i++){
            int low = 0;
            int high = m-1;
            int idx = m;
            
            while(low <= high){
                int mid = low+(high-low)/2;            
                long long tmp = (long long)spells[i] * potions[mid];
            
                if (tmp >= success){
                    idx = mid;
                    high = mid-1;
                }
                else
                    low = mid+1;               
            }
            
            ans.push_back(m-idx);
        }
        return ans;
    }
};