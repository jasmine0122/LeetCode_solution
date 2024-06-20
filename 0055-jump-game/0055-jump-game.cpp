class Solution {
public:
    bool canJump(vector<int>& nums) {
        int tmp = -1, count = 0;
        int max = 0;
        
        for(auto e:nums){
            if(tmp == -1){
                tmp = e;
                continue;
            }
            if(++count <= tmp){
                if(e >= tmp-count){
                    count = 0;
                    tmp = e;
                    continue;
                }
            }
            if(count > tmp)
                return 0;
        }
        return 1;
    }
};