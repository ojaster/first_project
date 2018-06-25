#include <iostream>
using namespace std;
int main(){
    int k[5];
    int h=5;
    for(int i=0; i <5; i++){
        cin>>k[i];
       
    }
    for(int i=0; i<5; i++){
         if(k[i]%2==0){
            cout<<k[i]<<endl;
        }
    }
}