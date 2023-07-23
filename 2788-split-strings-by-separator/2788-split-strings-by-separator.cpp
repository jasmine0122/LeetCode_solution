class Solution {
public:
    bool check(string s){
        if(s == "")
            return 0;
        return 1;
    }
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;

        for(int i=0; i<words.size(); i++){
            if(words[i].find(separator) != string::npos){  
                string s = words[i];
                while(s.find(separator) != string::npos){

                    int pos = s.find_first_of(separator);
                    if(check(s.substr(0,pos))){
                        ans.push_back(s.substr(0,pos));
                    }
                        
                    s = s.substr(pos+1);
                }
                if(check(s))
                    ans.push_back(s);
            }
            else
                ans.push_back(words[i]);
        }
        
        return ans;
    }
};