class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> upper(26, -1); //record_position
        vector<int> lower(26, -1);        
        int count = 0;       
        
        for(int i=0; i<word.size(); i++){
            if(islower(word[i])){
                lower[word[i]-97] = i;                
            }
            if(isupper(word[i]) and upper[word[i]-65] == -1){
                upper[word[i]-65] = i;                
            }        
        }
        for(int j=0; j<26; j++){
            if(lower[j] < upper[j] and lower[j] != -1) count++;
        }
        return count;
    }
};