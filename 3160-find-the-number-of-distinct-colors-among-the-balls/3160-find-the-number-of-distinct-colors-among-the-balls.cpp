class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        map<int, int> balls; //球的顏色
        map<int, int> colors; //顏色出現次數
        vector<int> result;
        
        for(const auto& q : queries) {
            // cout<<q[0]<<" "<<balls[q[0]]<<" "<<q[1]<<endl;    
            if(balls.find(q[0]) != balls.end()){ //找球、有找到的話
                colors[balls[q[0]]]--;
                if(colors[balls[q[0]]] == 0)
                    colors.erase(balls[q[0]]);
            }

            balls[q[0]] = q[1]; 
            colors[q[1]]++;
            
            result.push_back(colors.size());
        }
        
        return result;
    }
};