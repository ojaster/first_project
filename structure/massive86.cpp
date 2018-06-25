#include <iostream>
using namespace std;
int main(){
    const int n=8;
    int k[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    int j=0;
    for(int i =0; i<n; i++){
        if(k[i]==2){
            j++;
        }
    }
    cout<<"-----"<<endl;
    cout<<"kolv="<<j<<endl;
    cout<<"-----"<<endl;
    if(j>0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}