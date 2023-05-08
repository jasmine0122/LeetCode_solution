class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i = 0, w1=word1.length(), w2=word2.length();
        
        while(i<w1 || i<w2){
            if (i < w1)
                ans += word1[i];
            if (i < w2)
                ans += word2[i];
            i++;
        }
        return ans;
    }
};