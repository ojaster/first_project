#include <iostream>
using namespace std;
int main(){
    int k[6];
    int h = 6;
    for(int i = 0; i<6; i++){
        cin>>k[i];
    
    }

    for(int i=0; i<6; i++){
        if(k[i]%2==0){
            cout<<i<<" "<<k[i]<<endl;
        }
    }
}