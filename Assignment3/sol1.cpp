#include<bits/stdc++.h>
using namespace std;
int isprime(int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= sqrt(num); i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1; 
}
int count(int num){
 	int count=0;
 	for(int i=0;i<num;i++){
 		if(isprime(i)==1){
 			count++;
 		}
 	}
 	return count;
 }
 
int main(){
    int num;
    cin>>num;
    cout<<count(num);
    
    return  0;
    
}
