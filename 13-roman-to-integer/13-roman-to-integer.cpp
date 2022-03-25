class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        
        int n = s.length();
        int ans=0;
        for(int i=0; i<n; )
        {
            // 'IX'= 10-1=9
            // 'XL'= 50-10=40
            // 'IV'= 5-1=4
            if(i+1 < n && m[s[i]] < m[s[i+1]]){
                ans = ans + m[s[i+1]] - m[s[i]];
                i += 2;
            }  
            else{
                ans = ans + m[s[i]];
                i++;
            }
        }
        return ans;
    }
};