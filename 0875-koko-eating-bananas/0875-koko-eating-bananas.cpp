class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int right = piles[n-1];
        int mid = left + (right-left)/2;
        
        while(left < right){
            mid = left + (right-left)/2;
            int count = 0;
            for(auto p : piles){
                count += ceil(p*1.0/mid);
            }
            if(count > h){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        return left;
    }
};