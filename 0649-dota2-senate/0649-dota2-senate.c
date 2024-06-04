struct Node{
    char val;
    struct node *next;
};

struct Queue{
    // int size;
    struct Node *front;
    struct Node *rear;
};

struct Queue *initQueue(){
    struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    // q->size = s;
    return q;
};

struct Node *initNode(char v){
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    n->val = v;
    n->next = NULL;
    return n;
}

struct Queue *push(char v, struct Queue *q){
    if(q->front == NULL){
        q->front = initNode(v);
        q->rear = q->front;
        return q;
    }
    // if(q->ptr == q->size-1){
    //     printf("已滿、無法push\n");
    //     return q;
    // }
    struct Node *n = initNode(v);
    q->rear->next = n;
    q->rear = n;
    return q;
    
}

struct Queue *pop(struct Queue *q){
    if(q->front == NULL){
        // printf("已空、無法pop\n");
        return q;
    }
    struct Node *n = q->front;
    q->front = q->front->next;
    free(n);
    if(q->front == NULL)
        q->rear = NULL;
    return q;
}


char* predictPartyVictory(char* senate) {
    // int size = 8;
    struct Queue *q = initQueue();
    int flag = 1;
    char* alpha = senate;
    
    while(flag == 1){
        flag = 0;
        alpha = senate;
        while(*alpha){
            if(*alpha == '#'){
                alpha++;
                continue;
            }
            if(q->front == NULL){
                push(*alpha, q);
            }
            else{
                if(q->front->val == *alpha)
                    push(*alpha, q);
                else{
                    *alpha = '#';
                    flag = 1;
                    pop(q);
                }
            }
            alpha++;
        }
    }
    return q->front->val == 'R' ? "Radiant" : "Dire";  
}