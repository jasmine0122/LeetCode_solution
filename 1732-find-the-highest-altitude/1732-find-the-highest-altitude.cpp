class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> sum = {0};
        for(int i=0; i<gain.size(); i++){
            sum.push_back(sum.at(i)+gain.at(i));
        }
        return *max_element(sum.begin(), sum.end());
        
    }
};