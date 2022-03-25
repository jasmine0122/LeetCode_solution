class Solution {
public:
    bool isValid(string s) {
        stack <char> c;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                c.push(s[i]);
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']' ){
                if(c.empty())
                    return 0;
                else{
                    if(c.top() == '(' && s[i] == ')')
                        c.pop();
                    else if(c.top() == '{' && s[i] == '}')
                        c.pop();  
                    else if(c.top() == '[' && s[i] == ']')
                        c.pop();
                    else
                        return 0;
                }
            }
        }
        
        if(c.empty())
            return 1;
        else
            return 0;
    }
};