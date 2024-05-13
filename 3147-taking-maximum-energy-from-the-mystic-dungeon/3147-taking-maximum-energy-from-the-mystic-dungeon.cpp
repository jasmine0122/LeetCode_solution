class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int max = -1000;
        vector<int> dp(energy.size(), 0);
        
        for(int i=energy.size()-1; i>=0; i--){
            if(i+k < energy.size())
                dp[i] = energy[i] + dp[i+k];
            else
                dp[i] = energy[i];
            dp[i] > max ? max = dp[i] : max;
        }
        
        return max;
    }
};