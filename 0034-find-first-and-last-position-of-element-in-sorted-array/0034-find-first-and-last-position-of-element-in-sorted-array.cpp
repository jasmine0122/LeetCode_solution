class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {  
        int low = 0, high = nums.size()-1;
        int s = -1, e = -1;

        if(nums.empty())
            return {-1, -1};
    
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] < target)
                low = mid + 1;
            else if(nums[mid] > target)
                high = mid - 1;
            else{
                e = mid;
                low = mid + 1 ;
            }
        }

        low = 0;
        high = e;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] < target)
                low = mid + 1;
            else if(nums[mid] > target)
                high = mid - 1;
            else{
                s = mid;
                high = mid - 1;
            }
        }
        return {s, e};     
    }
};