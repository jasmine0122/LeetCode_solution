class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int, int> numbers;
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++){
            numbers[nums[i]]++;
            // cout<<numbers[nums[i]]<<endl;
            if(numbers[nums[i]] == 2)
                ans ^= nums[i];
        }
        return ans==-1 ? 0 : ans;
    }
};