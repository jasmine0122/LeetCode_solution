class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum = 0;
        
        for(int i=0; i<s.size(); i++){
            int pos = t.find(s[i]);
            if(pos != t.npos){
                sum += abs(pos-i);
            }
        }
        return sum;
    }
};