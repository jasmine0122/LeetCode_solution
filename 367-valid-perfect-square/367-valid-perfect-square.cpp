class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1, high = num;
        
        while(low <= high){
            int mid = high + (low - high)/2;
            if(pow(mid,2) == num)
                return true;
            else if(pow(mid,2) < num)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};