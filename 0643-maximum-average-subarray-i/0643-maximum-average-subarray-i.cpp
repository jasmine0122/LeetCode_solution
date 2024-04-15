class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = accumulate(nums.begin(), nums.begin()+k, 0);
        double max = sum;
        // cout<<sum<<endl;
        
        for(int i=0; i<nums.size()-k; i++){
            sum = sum-nums.at(i)+nums.at(i+k); 
            // cout<<sum<<" "<<nums.at(i)<<" "<<nums.at(i+k)<<endl;
            if(sum > max)
                max = sum;
        }
        
        return max/k;
            
    }
};