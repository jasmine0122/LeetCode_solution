class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        
        while(low <= high){
            int mid = high + (low - high)/2;
            if((long long)mid*mid == x)
                return mid;
            else if((long long)mid*mid > x)
                high = mid - 1;
            else
                low = mid + 1;                
        }
        if((long long)low*low > x)
            return low-1;
        else
            return low;
    }
};