#include <iostream>
using namespace std;
int main(){
    int k[300];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }

    for(int i=0; i<n; i++){
        cout<<k[i]<<endl;
    }

    cout<<endl;
    for(int i=0; i<n; i++){
        k[i]=k[i]*3;
        cout<<k[i]<<endl;
    }
} 