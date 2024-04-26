bool isValid(char* s) {
    char S[10000];
    int top = -1;
    
    for(int i=0; i<strlen(s); i++){  
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            S[++top] = s[i];       
        }
        else if(s[i] == ')'){
            if(top == -1 || S[top] != '(')
                return 0;
            else
                top--;
        }
        else if(s[i] == ']'){
            if(top == -1 || S[top] != '['){
                return 0;
            }

            else
                top--;
        }
        else if(s[i] == '}'){
            if(top == -1 || S[top] != '{')
                return 0;
            else
                top--;
        }
    }
    if(top == -1)
        return 1;
    else
        return 0;
}