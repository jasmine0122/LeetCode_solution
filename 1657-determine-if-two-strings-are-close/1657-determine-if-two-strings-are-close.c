int cmp(const void *p, const void *q){
    int A = *(int *)p;
    int B = *(int *)q;
    if(A == B)
        return 0;
    return (A < B ? -1 : 1);
}

// 另一種寫法
// int cmp(const void *p, const void *q){
//     return *(int *)p - *(int *)q;
// }

bool closeStrings(char* word1, char* word2) {
    int n1 = strlen(word1);
    int n2 = strlen(word2);
    int *map1 = calloc(26, sizeof(int));
    int *map2 = calloc(26, sizeof(int));
        
    if(n1 != n2)
        return 0;
    for(int i=0; i<n1; i++){
        map1[word1[i]-97]++;
        map2[word2[i]-97]++;        
    }
    
    for(int i=0; i<26; i++){
        if((map1[i] == 0 && map2[i] != 0) || (map2[i] == 0 && map1[i] != 0)){
            return 0;
        }
    }
    
    // qsort(a, n, sizeof(int), cmp); //a[n] C語言的排序函式
    qsort(map1, 26, sizeof(int), cmp);
    qsort(map2, 26, sizeof(int), cmp);   
    
    for(int i=0; i<26; i++){
        if(map1[i] != map2[i]){
            return 0;
        }
    }
    return 1;
}