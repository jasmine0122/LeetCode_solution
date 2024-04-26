int compress(char* chars, int charsSize) {
    int top = 0;
    char temp_alpha = chars[0];
    int count = 1;
    char buffer[5];
    
    for(int i=1; i<=charsSize; i++){
        if(i < charsSize && chars[i] == temp_alpha){
            count++;
            continue;
        }
        printf("%d ", count);
        
        chars[top++] = temp_alpha;
        if(count > 1){
            sprintf(buffer, "%d", count); // 格式化資料列印至緩衝區
			for(int j=0; j<strlen(buffer); j++) {
				chars[top++] = buffer[j];
			}
        }
        if (i < charsSize) {
            temp_alpha = chars[i];
		    count = 1;
        }
    }
    return top;
}