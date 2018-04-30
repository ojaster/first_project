#include <iostream>
using namespace std;
int main(){
    int x,k=0, elem;
    cout<<"x=";
    cin>>x;
    for(int i=0; i<x; i++){
       cout<<"elem=";
       cin>>elem;
       if(elem==0){
           k=k+1;
       }
    }
    cout<<k;
}