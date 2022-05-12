void insertionSort2(int n, vector<int> A) {
    int min,j;
    for(int i=1;i<n;i++){
        min=A[i];
        j=i;
        while(j>0&& A[j-1]>min){
            A[j]=A[j-1];
            j--;
        }
        A[j]= min;
         for(int i=0;i<A.size();i++){
             cout<<A[i]<<" ";
            }
        cout<<endl;
        
       }
    
    //return A;


}
