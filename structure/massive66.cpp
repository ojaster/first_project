#include <iostream>
using namespace std;
int main(){
    int const n=3;
    int k[n];
    int y[n];
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    
    for(int i=0; i<n; i++){
        y[i]=k[i]%10;
    }

    cout<<"------"<<endl;
    for(int i=0; i<n; i++){
        cout<<y[i]<<endl;
    }
    
}