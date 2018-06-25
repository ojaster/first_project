#include <iostream>
using namespace std;
int main(){
    int const n=4;
    int k[n];
    int amountSwaps = 0;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(k[i]%3==0){
            k[i]=0;
            amountSwaps++;
        }
    }
    cout<<"-------"<<endl;
    for(int i=0; i<n; i++){
        cout<<k[i]<<endl;
    }
    cout<<amountSwaps<<endl;
}