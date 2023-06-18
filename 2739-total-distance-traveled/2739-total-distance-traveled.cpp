class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        unsigned int sum = 0;
        while(mainTank >= 5){
            sum += 50;
            mainTank -= 5;
            if(additionalTank >= 1){
                additionalTank -= 1;
                mainTank += 1;
            }
        }
        return sum+mainTank*10;
    }
};