int maxArea(int* height, int heightSize) {
    int l = 0, r = heightSize-1;
    int max = 0;
    
    while(l < r){
        max =  fmax(fmin(height[l], height[r])*(r-l), max);
        // printf("%d\n", max);
        
        if(height[l] < height[r])
            l++;
        else
            r--;
    }
    
    return max;
}