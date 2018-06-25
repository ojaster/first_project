#include <iostream>
using namespace std;
int main(){
    int const n=3;
    int k[n];
    int sum=0,index;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }

    for(int i=0; i<n; i++){
        if(k[i]%2!=0){
            sum=sum+k[i];
        
        }
    }

    for(int i=0; i<n; i++){
        if(k[i]%3==0){
            k[i] = sum;
        }
    }
   
    
    cout<<"-------"<<endl;
    for(int i=0; i<n; i++) {
        cout<<k[i]<<endl;
    }
}