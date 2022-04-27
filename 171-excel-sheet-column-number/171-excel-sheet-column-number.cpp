class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char i:columnTitle)
            ans = ans*26 + (i-'A'+1);
        return ans;
    }
};