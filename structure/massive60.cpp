#include <iostream>
using namespace std;
int main(){
    int const n =6;
    int k[n];
    int max=0, min=999999999;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(min>=k[i]){
            min=k[i];
        }
        
    }
    for(int i=0; i<n; i++){
        if(max<=k[i]){
            max=k[i];
        }
    }

    for(int i = 0; i<n; i++) {
        if(k[i] == max) {
            cout<<"index max elem = " << i << endl;
        }
        if(k[i] == min) {
            cout<<"index min elem = " << i << endl;
        }
    }
   
}