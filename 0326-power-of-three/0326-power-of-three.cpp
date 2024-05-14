class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1)
            return true;
        
        while(n%3==0 && n!=0){
            if(n/3==1 && n%3==0)
                return true;
            n /= 3;
        }
        return false;
        
    }
};