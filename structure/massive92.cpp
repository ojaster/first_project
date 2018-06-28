#include <iostream>
using namespace std;
int main(){
    const int n=13;
    int k[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    int j=0;
    for(int i= 1; i < n- 1; i++){
        if(k[i]>k[i+1] && k[i]>k[i-1]){
            j = i;
        }

    } 
    
    for(int i= 0; i < j ; i++){
        if(k[i]>k[i+1] && k[i]>k[i-1]){
           cout<<k[i-1]<<k[i]<<k[i+1]<<endl; 
        }
        
    } 
    
}