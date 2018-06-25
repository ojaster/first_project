#include <iostream>
using namespace std;
int main(){
    const int n=4;
    int k[n];
    int N[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    for(int i =0; i<n; i++){
        N[i]=0;
    }
    for(int i =0; i<n; i++){

        for(int j =0; j<n; j++){
            if(k[i]==k[j]){
                N[i]++;
            }
        }
    }
    cout<<"#######"<<endl;
    for(int i =0; i<n; i++){
        if(N[i]==2){
            cout<<i<<endl;
        }
    }
    cout<<"---------"<<endl;
    for(int i =0; i<n; i++){
        cout<<N[i]<<endl;
    }
}