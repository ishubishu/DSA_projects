#include<bits/stdc++.h>
using namespace std;
//#define int long long

vector<int> mergesortedarray(vector<int> A,vector <int> B){
    int i=0;
    int j=0;
    vector<int> c;
    while(i<A.size()&&j<B.size()){
        if(A[i]<=B[j]){
            c.push_back(A[i]);
            i++;
        }
        else{
            c.push_back(B[j]);
            j++;
        }
        
    }
    while(i<A.size()){
        c.push_back(A[i]);
        i++;
    }
    while(j<B.size()){
        c.push_back(B[j]);
        j++;
    }
    return c;
    
    
}



int main(){
    vector<int> A={1,2,5,6};
    vector<int> B={1,3,4,7};
    vector<int> C = mergesortedarray(A,B);
    for(int a:C){
        cout<<a<<" ";
        
    }
}
