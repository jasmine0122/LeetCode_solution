//Refer to https://leetcode.com/problems/greatest-common-divisor-of-strings/discuss/3124940/
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 == str2 + str1){
            int L = gcd(str1.length(), str2.length());
            return str1.substr(0, L);
        }
        return "";
           

    }
};