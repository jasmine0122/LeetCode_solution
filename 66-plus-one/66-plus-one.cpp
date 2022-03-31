class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int L = digits.size()-1;
        
        while(L >= 0){
            if(digits[L] == 9)
                digits[L] = 0;
            else{
                digits[L]++;
                return digits;
            }
            L--;
        }
        
        vector<int>::iterator it = digits.begin();
        digits.insert(it, 1);
        return digits;
    }
};