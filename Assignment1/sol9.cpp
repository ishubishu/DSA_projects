int birthdayCakeCandles(vector<int> candles) {
    int t=1;
    int count=candles[0];
    for(int i=0;i<candles.size();i++){
        if(candles[i]>count){
            count=candles[i];
            t=1;
        }else{
              if(candles[i]==count){
                  count++;
              }
    
        
    }
    return count;

}
