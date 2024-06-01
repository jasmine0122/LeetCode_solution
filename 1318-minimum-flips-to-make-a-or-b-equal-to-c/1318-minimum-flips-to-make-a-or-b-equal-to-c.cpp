class Solution {
public:
    int minFlips(int a, int b, int c) {
        bool Ai, Bi, Ci;
        int idx = 0;
        int count = 0;
        
        while(pow(2, idx-1) < a || pow(2, idx-1) < b || pow(2, idx-1) < c){
            Ai = a & (1<<idx);
            Bi = b & (1<<idx);
            Ci = c & (1<<idx);
            // cout<<Ai<<" "<<Bi<<" "<<Ci<<endl;
            
            if(Ci == 1 && Ai+Bi == 0)
                count++;
            else if(Ci == 0)
                count += Ai+Bi;
            idx++;
        }
        
        return count;
    }
};