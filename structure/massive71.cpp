#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    int index,index2,sum=0;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(k[i]%2!=0 && k[i]<0){
            sum+=k[i];
        }
       
    }
    for(int i=0; i<n; i++){
      if(k[i]%3==0){
          k[i] = sum; // sum = k[i]
      }
      cout<<k[i]<<endl;
    }
    
}