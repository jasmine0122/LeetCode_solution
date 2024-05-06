char* longestCommonPrefix(char** strs, int strsSize) {
    for(int i=0; i<=strlen(strs[0]); i++){
        if(strs[0][i] == '\0')
            return strs[0];
        
        for(int j=1; j<strsSize; j++){
            if(strs[0][i] != strs[j][i]){
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return 0;
}