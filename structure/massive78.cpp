#include <iostream>
using namespace std;
int main(){
    const int n=4;
    int k[n];
    int N[n];
    for(int i =0; i<n; i++){
        cin>>k[i];   
    }
    cout<<"-------"<<endl;
    for(int i =0; i<n; i++){
        cin>>N[i];
    }
    for(int j = 0; j<n; j++){
        for(int i =0; i<n; i++){
            if(k[i]==N[j]){
                k[i] = 0;
            }
        }
    }
    cout<<"########"<<endl;
    for(int i =0; i<n; i++){
        cout<<k[i]<<endl;
    }
}