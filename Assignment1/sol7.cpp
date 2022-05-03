
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
