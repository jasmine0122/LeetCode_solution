class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size()-1;
        int mid;
        
        while(low <= high){
            mid = high + (low - high)/2;
            cout<<mid<<" ";
            if(arr[mid] > arr[mid-1]){
                if(arr[mid] > arr[mid+1])
                    return mid;
                else
                    low = mid + 1;
            }
            else                    
                high = mid - 1;
        }
        return mid;
    }
};