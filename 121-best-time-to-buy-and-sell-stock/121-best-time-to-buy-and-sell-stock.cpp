class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 1;
        int maxP = 0, minP = prices[0];
        
        if(prices.size() < 2)
            return 0;
        
        while(i<prices.size()){
            if(prices[i] > prices[i-1])
                maxP = max(maxP, prices[i] - minP);       
            else
                minP = min(minP, prices[i]);
            i++;
        }
        return maxP;
    }
};