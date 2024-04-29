class Solution {
public:
    string reverseWords(string s) {
        string tmp;
        stringstream ss(s);
        vector<string> ans;
        
        while(ss >> tmp){
            ans.push_back(tmp);
        }
        
        tmp = "";
        for(int i=ans.size()-1; i>0 ;i--){
            tmp += ans[i] + " ";
        }
        tmp += ans[0];
        
        return tmp;
    }
};