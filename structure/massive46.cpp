#include <iostream>
using namespace std;
int main(){
    int const n=3;
    int k[n];
    for(int i=0;i<n; i++){
        cin>>k[i];
    }
    int number;
    for(int i=0;i<n; i++){
        if(k[i]<0) {
            number=i;
        }   
    }
    int indexdelete = number;
    for(int i = indexdelete;i<n-1; i++){
        k[i]=k[i+1];
    }
    k[n-1]=0;
    for(int i=0;i<n;i++){
        cout<<k[i]<<endl;
    }
}