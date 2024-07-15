char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1), len2 = strlen(word2);
    int lenSize = len1+len2+1;
    char* ans = malloc(sizeof(char)*(lenSize));
    int j=0, k=0;
    
    for (int i = 0; i < lenSize-1; i++) {
        if (i % 2 == 0) {
            ans[i] = j<len1 ? word1[j++] : word2[k++];
        } else {
            ans[i] = k<len2 ? word2[k++] : word1[j++];            
        }
    }
    
    ans[lenSize-1] = '\0';
    return ans;
}