Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers w
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr;
    int n,a;
    float pe=0,ze=0,na=0;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pe++;
        }
        else if(arr[i]==0){
            ze++;
        }
        else if (arr[i]<0){
            na++;
        }
        
    }
    cout<<fixed<<setprecision(6)<<pe/n<<endl<<na/n<<endl<<ze/n<<endl;
    return 0;
}
