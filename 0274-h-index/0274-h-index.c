int hIndex(int* citations, int citationsSize) {
    int *bucket = calloc(citationsSize+1, sizeof(int));
    
    for(int i=0; i<citationsSize; i++){
        if(citations[i] > citationsSize)
            bucket[citationsSize]++;
        else
            bucket[citations[i]]++;
    }
    
    int count = 0;
    for(int i=citationsSize; i>=0; i--){
        count += bucket[i];
        if(count >= i)
            return i;
    }
    free(bucket);
    
    return 0;
}