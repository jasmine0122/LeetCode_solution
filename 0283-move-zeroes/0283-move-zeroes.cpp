class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1=0;
        
        for(int p2=0; p2<nums.size(); p2++){
            if(nums[p2] != 0){
                nums[p1] = nums[p2];
                p1++;
            }
        }
        while(p1 < nums.size()){
            nums[p1] = 0;
            p1++;
        }
    }
};