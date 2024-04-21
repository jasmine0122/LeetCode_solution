int maxProfit(int* prices, int pricesSize) {
    int min = pow(10, 4), max = 0;
    
    for(int i=0; i<pricesSize; i++){
        if(prices[i]-min > max){
            max = prices[i]-min;       
            continue;
        }
        if(prices[i]<min)
            min = prices[i];
    }
    return max;
}