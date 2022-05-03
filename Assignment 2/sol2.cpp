#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,n;
    char *str[]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    cin>>a;
    cin>>b;
    for(n=a;n<=b;n++){
        if(n<=9){
            cout<<str[n-1]<<endl;
        }
        else{
            cout<<str[9+(n%2)]<<endl;
        }
    }
    return 0;
}
