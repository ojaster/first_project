#include <iostream>
using namespace std;
int main(){
    const int n=8;
    int k[n];
    int min=99999999;
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    for(int i =0; i<n; i++){
        if(k[i]<min){
            min=k[i]; 
        }
    }
    cout<<"-----"<<endl;
    for(int i =0; i<n; i++){
        cout<<k[i]<<endl;
    }
}