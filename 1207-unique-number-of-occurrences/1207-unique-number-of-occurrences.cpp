class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> M;
        unordered_set<int> S;
        
        for (int i: arr)
            M[i]++;

        // 這邊M[i] == j
        // for (auto& [i,j]: M)
        //     cout<<i<<" "<<j<<endl;
        
        for (auto [i,j]: M){
            if (S.count(j) >= 1) 
                return 0;
            S.insert(j);
        }
        return 1;        
        
        
    }
};