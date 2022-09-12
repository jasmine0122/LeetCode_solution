class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        vector<int> p;
        sort(tokens.begin(), tokens.end());
        while(tokens.size()>0){
            for(int i=0; i<tokens.size(); i++){
                if(tokens[i]<=power){
                    power-=tokens[i];
                    score++;
                    p.push_back(i);
                    // cout<<"1: "<<tokens[i]<<" "<<score<<endl;
                }
            }
            for(int i=0; i<p.size(); i++)
                tokens.erase(tokens.begin()+p[i]-i);
            p.clear();
            
            if(tokens.size()==0)
                return score;
            else if(tokens[tokens.size()-1]>power && tokens.size()==1 && score>0){
                power+=tokens[tokens.size()-1];
                // cout<<"2: "<<tokens[tokens.size()-1]<<" "<<score<<endl;
                tokens.pop_back();
            }
            else if(tokens[tokens.size()-1]>power && tokens.size() > 0 && score>0){
                power+=tokens[tokens.size()-1];
                score--;
                // cout<<"3: "<<tokens[tokens.size()-1]<<" "<<score<<endl;
                tokens.pop_back();
            }   
            else if(tokens.size()>0){
                tokens.pop_back();
                // cout<<"4: "<<score<<endl;
            }
        }
        return score;
    }
};