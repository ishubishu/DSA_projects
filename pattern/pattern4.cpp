#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=n;
    for(int i=1;i<=n;i++){
       //int s=n/2;
        for(int j=1;j<=s;j++){
            cout<<"#";
        }
        cout<<endl;
        s/=2;
    }
    return 0;
}
