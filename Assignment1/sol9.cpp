int birthdayCakeCandles(vector<int> candles) {
    int max=INT_MIN;
    int count=0;
    for(int i=0;i<candles.size();i++){
        if(candles[i]>max){
            max=candles[i];
        }
    }
    for(int j=0;j<candles.size();j++){
        if(candles[j]==max){
            count++;
        }
        
    }
    return count;

}
