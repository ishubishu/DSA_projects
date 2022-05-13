vector<int> countingSort(vector<int> arr) {
    vector<int> count(100);
    for(int i=0;i<100;i++){
        count[i]=0;
    }
    for(int i=0;i<arr.size();i++){
       for(int j=i+1;j<=arr.size();j++){
           if(arr[i]==arr[j]){
               count[i]+=1;
           }
       }
   // for(int i=0;i<count.size();i++){
        return count[i];
 //   }

}
