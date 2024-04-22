bool isSubsequence(char* s, char* t) {
    int p1 = 0, p2 = 0;
    int count = 0;
    
    if(strlen(s) > strlen(t))
        return 0;

    
    while(p1 < strlen(s) && p2 < strlen(t)){
        if(s[p1] == t[p2]){
            p1++;
            count++;
        }
        p2++;
    }
    return (count == strlen(s) ? 1 : 0);
    
}