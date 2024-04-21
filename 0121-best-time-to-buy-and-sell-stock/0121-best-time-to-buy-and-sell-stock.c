int maxProfit(int* prices, int pricesSize) {
    int min = pow(10, 4), max = 0;
    int temp = 0;
    
    for(int i=0; i<pricesSize; i++){
        if(prices[i]<min){
            min = prices[i];
            max = 0;
        }
        if(prices[i]>max)
            max = prices[i];
        if(max-min > temp)
            temp = max-min;
    }
    return temp;
}