/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    int* stack = (int*)calloc(asteroidsSize, sizeof(int));
    int top = -1, i = 0;

    while(i < asteroidsSize)
    {
        if(top >= 0 && stack[top] > 0 && asteroids[i] < 0)  // collision
        {
            if(abs(asteroids[i]) > abs(stack[top]))
                top--;
            else if(abs(asteroids[i]) == abs(stack[top]))
            { 
                top--;
                i++; 
            }
            else
                i++;
        }
        else
            stack[++top] = asteroids[i++];
    }
    *returnSize = top+1;
    return stack;
}