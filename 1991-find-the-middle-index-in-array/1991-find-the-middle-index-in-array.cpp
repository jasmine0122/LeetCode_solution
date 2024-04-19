class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int temp = 0;
        // cout<<sum<<endl;
        
        for(int i=0; i<nums.size() ;i++){
            // cout<<sum<<" "<<temp<<endl;
            if(temp+nums[i] == sum)
                return i;
            sum -= nums[i];
            temp += nums[i];
        }
        return -1;
        
    }
};