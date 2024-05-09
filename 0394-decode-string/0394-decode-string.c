// 練習用C寫stack(linklist版)
typedef struct node{
    int ptr;
    int size;
    char* value;
}node;

char* reverse(char* arr);
char popStack(node *stack);
char popStack(node *stack);
char* get(node *stack);
node* createStack();
void pushStack(node *stack, char c);

char* decodeString(char* s) {
    node *stackNum = createStack(); //指向函數的指標
    node *stackStr = createStack();  
    int i = 0;
    
    while(i < strlen(s)){
        if(isdigit(s[i])){
            pushStack(stackNum, s[i]);
        }
        else if(s[i] == '['){
            pushStack(stackNum, s[i]);
            pushStack(stackStr, s[i]);
        }      
        else if(s[i] == ']'){
            char tmp = popStack(stackNum);
            char* nums = get(stackNum);
            char* strs = get(stackStr);
            
            if(stackNum != 0){
                pushStack(stackNum, tmp);
            }
            int times = 0;
            sscanf(nums, "%d", &times);
            free(nums);
            
            for(int i=0; i<times; i++)
                for(int j=0; j<strlen(strs); j++)
                    pushStack(stackStr, strs[j]);
            free(strs);
        }
        else
            pushStack(stackStr, s[i]);
        i++;
    }
    char* ans = (char*)calloc(stackStr->ptr+1, sizeof(char));
    strncpy(ans, stackStr->value, stackStr->ptr);
    
    return ans;
}

char* reverse(char* arr){
    char* head = &arr[0];
    char* end = &arr[strlen(arr)-1];
    char* tmp = 0x00;
    // for(int i=0; i<strlen(arr); i++)
    //     printf("%c", arr[i]);
    // printf("\n");
    
    while(head < end){
        tmp = *head;
        *head = *end;
        *end = tmp;
        head++;
        end--;
    }

    return arr;
}

char popStack(node *stack){
    char tmp = 0x00;
    
    if(stack->ptr != 0){
        stack->ptr--;
        tmp = stack->value[stack->ptr];
    }
    return tmp;
}

char* get(node *stack){
    char* arr = (char*)calloc(stack->size, sizeof(char));
    int idx = 0;
    
    while(idx < stack->size){
        char tmp = popStack(stack);
        if(tmp == '[')
            break;
        arr[idx++] = tmp;
    }
    return reverse(arr);
}

node* createStack(){
    node *stack = (node*)malloc(sizeof(node));
    stack->ptr = 0;
    stack->size = 8;
    stack->value = (char*)calloc(10, sizeof(char));    
    
    return stack;
}

void appendStack(node *stack){
    stack->size *= 2;
    stack->value = (char*)realloc(stack->value, stack->size*sizeof(char));
    memset(&stack->value[stack->size/2], 0, stack->size/2); //從新的空間開始設值為0
}

void pushStack(node *stack, char c){
    if(stack->ptr == stack->size -1)
        appendStack(stack);
    
    stack->value[stack->ptr] = c;
    stack->ptr++;
}