class Solution {
public:
    int climbStairs(int n) {
        if (n < 4) 
            return n;
        
        int ans = 3;
        int f1 = 2, f2 = 3;
        while(n > 3) {
            ans += f1;
            f1 = f2;
            f2 = ans;
            n--;
        }
        return ans;
    }
};