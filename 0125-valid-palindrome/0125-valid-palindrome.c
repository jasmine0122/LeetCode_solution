bool isPalindrome(char* s) {
    int l = 0, r = strlen(s)-1;
    
    while(l < r){
        if(!isalpha(s[l]) && !isdigit(s[l]))
            l++;
        else if(!isalpha(s[r]) && !isdigit(s[r]))
            r--;
        else if(tolower(s[l]) != tolower(s[r]))
            return 0;
        else{
            l++;
            r--;
        }
    }
    
    return 1;
}