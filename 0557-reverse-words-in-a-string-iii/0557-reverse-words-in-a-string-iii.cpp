class Solution {
public:
    string reverseWords(string s){
        int start = 0, i = 0;
        
        while(i < s.length()){
            if (s[i] == ' '){
                reverse(s.begin()+start, s.begin()+i);
                start = i + 1;
            }
            i++;
        }
        reverse(s.begin()+start, s.end());
        return s;
    }
};