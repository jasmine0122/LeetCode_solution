// Refer to https://leetcode.com/problems/roman-to-integer/discuss/1960876
int romanToInt(char* s) {
    int t['X' + 1] = {
        ['I'] = 1,
        ['V'] = 5,
        ['X'] = 10,
        ['L'] = 50,
        ['C'] = 100,
        ['D'] = 500,
        ['M'] = 1000,
    };
    
    int ans = 0;
    for (int i=0; i<strlen(s); i++) {
        if (t[s[i]] < t[s[i+1]])
            ans -= t[s[i]];
        else
            ans += t[s[i]];
    }
    return ans;
}