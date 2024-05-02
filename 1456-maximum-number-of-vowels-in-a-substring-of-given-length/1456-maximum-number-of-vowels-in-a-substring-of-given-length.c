// Refer to leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/discuss/4715015
bool judge(char a){
    return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
}

int maxVowels(char* s, int k) {
    int count = 0;
    for(int i = 0; i < k; i++){
        count += judge(s[i]);
    }
    int max = count;

    for(int i=k; i<strlen(s); i++) {
        count += judge(s[i]);
        if (judge(s[i-k]))
            count--;
        count>max ? max=count : max;
    }

    return max;
}