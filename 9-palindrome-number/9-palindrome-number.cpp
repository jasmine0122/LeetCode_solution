class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return 0;
        
        long long int tmp = x, n = 0; 
        while(tmp){
            n = n*10 + tmp%10;
            tmp /= 10;
        }
        return x == n;
    }
};