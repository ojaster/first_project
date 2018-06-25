#include <iostream>
using namespace std;
int main(){
    int k[30];
    int n,b,a;
    cin>>n;
    cout<<"b:";
    cin>>b;
    cout<<"a:";
    cin>>a;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    cout<<"-------"<<endl;
    for(int i=0; i<n; i++){
        if(k[i]<0){
            k[i]=k[i]-a;
        }
        if(k[i]==0){
            k[i]=k[i]-b;
        }
        cout<<k[i]<<endl;
    }
    
}