typedef struct node{
    int val;
    struct node *next;
    struct node *prev;    
} Node;


typedef struct queue{
    int size;
    int maxSize;
    Node *head, *tail;
} MyCircularDeque;


MyCircularDeque* myCircularDequeCreate(int k) {
    MyCircularDeque *Q = malloc(sizeof(MyCircularDeque));
    Q->size = 0;
    Q->maxSize = k;
    Q->head = Q->tail = NULL;
    
    return Q;
}

bool myCircularDequeInsertFront(MyCircularDeque* obj, int value) {
    if(obj->size == obj->maxSize)
        return 0;
    
    Node *tmp = malloc(sizeof(Node));
    tmp->val = value;
    tmp->prev = NULL;
    
    if(obj->head == NULL){
        tmp->next = NULL;
        obj->head = tmp;
        obj->tail = tmp;
        
    }
    else{
        obj->head->prev = tmp;
        tmp->next = obj->head;
        obj->head = tmp;
    }
    obj->size++;
    
    return 1;
}

bool myCircularDequeInsertLast(MyCircularDeque* obj, int value) {
    if(obj->size == obj->maxSize)
        return 0;
    
    Node *tmp = malloc(sizeof(Node));
    tmp->val = value;
    tmp->next = NULL;
    
    if(obj->head == NULL){
        tmp->prev = NULL;
        obj->head = tmp;
        obj->tail = tmp;
    }
    else{
        obj->tail->next = tmp;
        tmp->prev = obj->tail;
        obj->tail = tmp;
        
    }
    obj->size++;
    
    return 1;
}

bool myCircularDequeDeleteFront(MyCircularDeque* obj) {
    if(obj->head == NULL)
        return 0;
    else if(obj->head == obj->tail){
        free(obj->head);
        obj->head = NULL;
        obj->tail = NULL;
        obj->size = 0;
        return 1;
    }
    else{
        Node *tmp = malloc(sizeof(Node));
        tmp = obj->head;
        obj->head = obj->head->next;
        obj->head->prev = NULL;
        obj->size--;
        free(tmp);
        return 1;
    }
}

bool myCircularDequeDeleteLast(MyCircularDeque* obj) {
    if(obj->head == NULL)
        return 0;
    else if(obj->head == obj->tail){
        free(obj->head);
        obj->head = NULL;
        obj->tail = NULL;
        obj->size = 0;
        return 1;
    }
    else{
        Node *tmp = malloc(sizeof(Node));
        tmp = obj->tail;
        obj->tail = obj->tail->prev;
        obj->tail->next = NULL;
        free(tmp);
        obj->size--;
        return 1;
    }
}

int myCircularDequeGetFront(MyCircularDeque* obj) {
    if(obj->head == NULL)
        return -1;
    return obj->head->val;
}

int myCircularDequeGetRear(MyCircularDeque* obj) {
    if(obj->head == NULL)
        return -1;
    return obj->tail->val;   
}

bool myCircularDequeIsEmpty(MyCircularDeque* obj) {
    if(obj->size == 0 || obj->head == NULL)
        return 1;
    return 0;
}

bool myCircularDequeIsFull(MyCircularDeque* obj) {
    if(obj->size >= obj->maxSize)
        return 1;
    return 0;
}

void myCircularDequeFree(MyCircularDeque* obj) {
    while(myCircularDequeIsEmpty(obj) == 0){
        Node *tmp = malloc(sizeof(Node));
        tmp = obj->head;
        obj->head = obj->head->next;
    }
}

/**
 * Your MyCircularDeque struct will be instantiated and called as such:
 * MyCircularDeque* obj = myCircularDequeCreate(k);
 * bool param_1 = myCircularDequeInsertFront(obj, value);
 
 * bool param_2 = myCircularDequeInsertLast(obj, value);
 
 * bool param_3 = myCircularDequeDeleteFront(obj);
 
 * bool param_4 = myCircularDequeDeleteLast(obj);
 
 * int param_5 = myCircularDequeGetFront(obj);
 
 * int param_6 = myCircularDequeGetRear(obj);
 
 * bool param_7 = myCircularDequeIsEmpty(obj);
 
 * bool param_8 = myCircularDequeIsFull(obj);
 
 * myCircularDequeFree(obj);
*/