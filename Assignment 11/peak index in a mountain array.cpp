class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size(),i;
        if(n>=3){
            for( i=0;i<n-1;i++)
            {
                return distance(arr.begin(),max_element(arr.begin(),arr.end()));
            }
        }   
        
         return 0;
        
    }
};
