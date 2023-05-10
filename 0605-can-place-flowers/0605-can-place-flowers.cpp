class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        
        for (int i=0; i<flowerbed.size(); i++) {
            //Consider the first two are 0, the last two are 0, and the middle three are 0
            if (flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==flowerbed.size()-1 || flowerbed[i+1]==0)){
                flowerbed[i] = 1;
                count++;
            }
            if (count >= n)
                return true;
        }
        return false;

    }
};