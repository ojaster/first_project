#include <iostream>
using namespace std;
int main(){
    const int n=6;
    int k[n];
    for(int i =0; i<n; i++){
     cin>>k[i];
    }
    for(int i = 1; i < n - 1; i++){
     if(k[i]>k[i+1] && k[i]>k[i-1]){ // 0 9 7
         cout<<k[i-1]<<k[i]<<k[i+1]<<endl;
         break;
     }
    }   
    
}