class Solution {
public:
    int arrangeCoins(int n) {
        int count = 1;
        
        if(n == 1)
            return 1;
        
        while(n > 0){
            if(n-count == 0)
                return count;
            else if(n-count < 0)
                return count-1;
            n = n-count;
            count++;
        }
        return {};
    }
};