class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int j = 0;
        char tmp;
        string str;
        
        tmp = strs[0][0];
        while(j < strs[0].length()){
            for(int i=0; i<strs.size(); i++){
                if(tmp != strs[i][j])
                    return str;
            }
            if(strs[0].length() == 1){
                str = tmp;
                return str;
            }
            j++;
            tmp = strs[0][j];
            str += strs[0][j-1];
        }
        if(str == strs[0])
            return str;
        return {};
    }
};