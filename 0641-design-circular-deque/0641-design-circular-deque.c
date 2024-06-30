typedef struct {
    int *arr;
    int maxSize;
    int size;
    int front;
    int rear;
} MyCircularDeque;


MyCircularDeque* myCircularDequeCreate(int k) {
    MyCircularDeque* tmp = malloc(sizeof(MyCircularDeque));
    tmp->arr = malloc(sizeof(int)*k);
    tmp->maxSize = k;
    tmp->size = 0;
    tmp->front = -1;
    tmp->rear = -1;    
    
    return tmp;
}

bool myCircularDequeIsEmpty(MyCircularDeque* obj) {
    if(obj->size == 0)
        return 1;
    return 0;
}

bool myCircularDequeIsFull(MyCircularDeque* obj) {
    if(obj->size == obj->maxSize)
        return 1;
    return 0;    
}

bool myCircularDequeInsertFront(MyCircularDeque* obj, int value) {
    if(myCircularDequeIsFull(obj))
        return 0;
    if(myCircularDequeIsEmpty(obj)){
        obj->front = 0;
        obj->rear = 0;
    }
    else{
        obj->front = ((obj->front-1) + obj->maxSize) % obj->maxSize;     
    }
    obj->size++;
    obj->arr[obj->front] = value;
    
    return 1;
}

bool myCircularDequeInsertLast(MyCircularDeque* obj, int value) {
    if(myCircularDequeIsFull(obj))
        return 0;
    if(myCircularDequeIsEmpty(obj)){
        obj->front = 0;
        obj->rear = 0;
    }
    else{
        obj->rear = (obj->rear + 1) % obj->maxSize;     
    }
    obj->size++;
    obj->arr[obj->rear] = value;
    
    return 1; 
}

bool myCircularDequeDeleteFront(MyCircularDeque* obj) {
    if(myCircularDequeIsEmpty(obj))
        return 0;
    
    if(obj->front == obj->rear){
        obj->front = -1;
        obj->rear = -1;
    }
    else{
        obj->front = (obj->front + 1) % obj->maxSize;   
    }
    obj->size--;
    
    return 1; 
}

bool myCircularDequeDeleteLast(MyCircularDeque* obj) {
     if(myCircularDequeIsEmpty(obj))
        return 0;
    
    if(obj->front == obj->rear){
        obj->front = -1;
        obj->rear = -1;
    }
    else{
        obj->rear = ((obj->rear-1) + obj->maxSize) % obj->maxSize;   
    }
    obj->size--;
    
    return 1;    
}

int myCircularDequeGetFront(MyCircularDeque* obj) {
    if(myCircularDequeIsEmpty(obj))
        return -1;
    return obj->arr[obj->front];   
}

int myCircularDequeGetRear(MyCircularDeque* obj) {
    if(myCircularDequeIsEmpty(obj))
        return -1;
    return obj->arr[obj->rear];   
}

void myCircularDequeFree(MyCircularDeque* obj) {
    free(obj->arr);
    free(obj);
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