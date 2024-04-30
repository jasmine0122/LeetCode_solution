int mySqrt(int x) {
    long long low = 0, high = x;
    long long mid = 0, tmp = 0;
    
    while(low < high){
        mid = low + (high - low)/2;
        tmp = mid * mid;
        if(tmp == x){
            return mid;
        }
        else if(tmp < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    tmp = low * low;
    return (tmp > x ? low-1 : low);
}