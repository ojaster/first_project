#include <iostream>
using namespace std;
int main(){
    int const n=4;
    int k[n];
    int d[n];
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
      d[i] = k[i]%10 + k[i]/10 ;
    }

    for(int i=0; i<n; i++){
     cout<<d[i]<<endl;   
    }
}