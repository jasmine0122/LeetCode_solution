class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0, high = letters.size()-1;
        char ans = letters[0];
        
        while(low <= high){
            int mid = high + (low - high)/2;
            if(letters[mid] > target){
                cout<<"hi"<<endl;
                ans = letters[mid];
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};