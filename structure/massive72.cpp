#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    int index,sum=0,r=0;
    for(int i=0; i<n; i++){
     cin>>k[i];   
    }
    for(int i=0; i<n; i++){
        if(k[i]<0){
            index=i;
        }
        
    }
    for(int i=0; i<index; i++){
        sum+=k[i];
        r++;
    }
    cout<<sum<<endl;
    cout<<r<<endl;

}