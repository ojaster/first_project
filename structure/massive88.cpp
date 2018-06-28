#include <iostream>
using namespace std;
int main(){
    const int n=4;
    int k[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    int index;
    for(int i =0; i<n; i++){
        if(k[i]==0){
            index=i;
            //break;
        }
    }

    cout<<"-----"<<endl;
    for(int i =0 ; i < n; i++){
        if(i != index){
            cout<<k[i]<<endl;
        }
    }
}