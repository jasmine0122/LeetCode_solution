class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        
        for(int i=0; i<s.length() ;i++){
            if(s[i] == 'A')
                continue;
            if(s[i] == 'I'){
                if(s[i+1] == 'V'){
                    sum += 4;
                    s[i+1] = 'A';
                }
                else if(s[i+1] == 'X'){
                    sum += 9;
                    s[i+1] = 'A';
                }
                else
                    sum += 1;  
            }
            else if(s[i] == 'X'){
                if(s[i+1] == 'L'){
                    sum += 40;
                    s[i+1] = 'A';
                }
                else if(s[i+1] == 'C'){
                    sum += 90;
                    s[i+1] = 'A';
                }
                else
                    sum += 10;                     
            }
            else if(s[i] == 'C'){
                if(s[i+1] == 'D'){
                    sum += 400;
                    s[i+1] = 'A';
                }
                else if(s[i+1] == 'M'){
                    sum += 900;
                    s[i+1] = 'A';
                }
                else
                    sum += 100;                     
            }
            else if(s[i] == 'V')
                sum += 5;
            else if(s[i] == 'L')
                sum += 50;           
            else if(s[i] == 'D')
                sum += 500;
            else if(s[i] == 'M')
                sum += 1000;
        }
        return sum;
    }
};