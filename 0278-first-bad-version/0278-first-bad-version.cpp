// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int l=1, h=n, ans=0;
        
        while(l <= h){
            int mid = (l+h)/2;
            if(isBadVersion(mid) == 1)
                h = mid - 1;
            else if(isBadVersion(mid) == 0){
                l = mid + 1; 
                ans = mid;
            }
                               
        }
        return ans+1;
    }
};