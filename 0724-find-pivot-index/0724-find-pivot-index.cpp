class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int L, R;
        for(int i=0; i<nums.size(); i++){
            if(i == 0)
                L = 0;
            else
                L = accumulate(nums.begin(), nums.begin()+i, 0);
            if(i == nums.size()-1)
                R = 0;
            else
                R = accumulate(nums.begin()+i+1, nums.end(), 0);
            if(L == R){
                return i;
            }
        }
        return -1;
    }
};