class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        
        if(s.length() != t.length())
            return false;
        
        for(int i=0; i<s.size(); i++) {
            m[s[i]]++;
            m[t[i]]--;
        }
        for(auto index : m)
            if(index.second != 0)
                return false;
        return true;
    }
};