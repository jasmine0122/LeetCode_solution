class Solution {
public:
    int scoreOfString(string s) {
        adjacent_difference(s.begin(), s.end(), s.begin());
        // for(int i:s)
        //     cout<<i<<endl;
        
        return accumulate(s.begin()+1, s.end(), 0, [](int x, int y){
            return x+abs(y);
        });
    }
};