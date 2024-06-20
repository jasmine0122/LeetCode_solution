int maxProfit(int* prices, int pricesSize) {
    int sum = 0, min = prices[0];
    
    for(int i=1 ;i<pricesSize; i++){
        if(prices[i]-min > 0){
            sum += prices[i]-min;
            min = prices[i];
            continue;
        }
        if(prices[i] < min)
            min = prices[i];
    }
    
    return sum;
}