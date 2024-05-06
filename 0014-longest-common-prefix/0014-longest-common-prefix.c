char* longestCommonPrefix(char** strs, int strsSize) {
	for(int c=0;; ++c)
	{
		if(strs[0][c] == '\0') 
			return strs[0];
        
		for(int s=1; s<strsSize; ++s)
		{
			if(strs[s][c] != strs[0][c]) 
			{
				strs[0][c] = '\0';
				return strs[0];
			}
		}
	}
}