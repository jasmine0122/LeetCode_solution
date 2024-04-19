class Solution {
public:
    string removeStars(string s) {
        string S;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='*')
                S.pop_back();
            else
                S+=s[i];
        }
        return S;
    }
};