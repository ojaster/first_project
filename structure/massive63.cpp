#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    int max=0;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(max<k[i]){
            max=k[i];
        }
    }
    for(int i=0; i<n; i++){
        if(k[i]%2==0){
            k[i]=max;
        }
    }
    cout<<"-----"<<endl;
    for(int i=0; i<n; i++){
        cout<<k[i]<<endl;
    }
    
    
}
