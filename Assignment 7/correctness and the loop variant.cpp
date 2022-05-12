void insertionSort(int n, int A[]) {
   // int min=0,i;
    for(int j=0;j<n-1;j++){
        
        for(int i=j;i<n;i++){
        if(A[j]>A[i]){
           
            swap(A[j],A[i]);
        }
     }
    }
     for(int k=0;k<n;k++){
            cout<<A[k]<<" ";
        } 
           
        
        
    } 
