// bit operation
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lower = 0, upper = 0;
        
        for(int i=0; i<word.size(); i++){
            if(islower(word[i]))
                lower |= (1 << word[i]-97);
            else
                upper |= (1 << word[i]-65);
        }
        // cout<<lower<<endl<<upper<<endl;
    
        int count = 0;
        for(int i=0 ;i<26; i++){
            if(lower & (1 << i) && upper & (1 << i)){
                // int temp = upper & (1 << i);
                // int temp1 = lower & (1 << i);
                // cout<<temp && temp1;
                count++;                
            }
        }
        return count;
    }
};