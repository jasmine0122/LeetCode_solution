class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int maxP = 0, minP = INT_MAX;
        
        if(prices.size() < 2)
            return 0;
        
        while(i<prices.size()){
            minP = min(minP, prices[i]);
            maxP = max(maxP, prices[i] - minP);       
            i++;
        }
        return maxP;
    }
};