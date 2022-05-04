#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    vector<int> arr;
    int size;
    int a;
    cin>>size;
    for (int i=0;i<size;i++){
        cin>>a;
        arr.push_back(a);
    }  
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
