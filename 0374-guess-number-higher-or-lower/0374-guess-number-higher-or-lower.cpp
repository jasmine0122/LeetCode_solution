/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int L=1, H=n;
        
        while(L <= H){
            int mid = H - (H-L)/2; 
            int G = guess(mid);

            if(G == 1)
                L = mid+1;
            else if(G == -1)
                H = mid-1; 
            else
                return mid;
        }
        return {};
    }
};