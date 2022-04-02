// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, ans = 0;
        int high = n;
        unsigned int mid = 0;
        
        while(low <= high){
            mid = low;
            mid += high;
            mid /= 2;
            
            if(isBadVersion(mid)){
                high = mid - 1;
                ans = mid;
            }
            else if(!isBadVersion(mid))
                low = mid + 1;
        }
        return ans;
    }
};