class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
	    for(i=0, j=1; j < size(nums); j++){
		    if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }

        }
	    return i+1;
    }
};