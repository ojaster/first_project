#include <iostream>
using namespace std;
int main(){
    int const n =10;
    int k[n];
    int f=0;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }  
    for(int i=0; i<n-1; i++){
        if((k[i]<0 && k[i+1]>0)  || (k[i]>0 && k[i+1]<0)){
            f++;
        }
    }  
    cout<<f<<endl;
}