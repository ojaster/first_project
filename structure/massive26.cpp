#include <iostream>
using namespace std;
int main(){
    int k[30];
    int a,n,sum=0;
    cin>>n;
    cout<<"ves=";
    cin>>a;
    for(int i=0; i<n; i++){
        cin>>k[i];
        sum=sum+k[i];
    }
    if(sum>a){
        cout<<"no";
    }else{
        cout<<"yes";
    }
}