int runningTime(vector<int> A) {
   int count=0;
    for(int j=0;j<A.size()-1;j++){
        
        for(int i=j;i<A.size();i++){
        if(A[j]>A[i]){
           
            swap(A[j],A[i]);
            count++;
        }
     }
    }
    
        
        
    return count;

}
