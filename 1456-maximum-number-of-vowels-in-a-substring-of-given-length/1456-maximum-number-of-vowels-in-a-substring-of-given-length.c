bool judge(char a){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')    
        return 1;
    return 0;
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