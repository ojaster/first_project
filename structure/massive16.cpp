#include <iostream>
using namespace std;
int main(){
    int k[6];
    for(int i=0; i<6; i++){
        cin>>k[i];
        k[i]=k[i]-20;
    }
    for(int i=0; i<6; i++){
        cout<<k[i];
    }
    
}