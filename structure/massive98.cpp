#include <iostream>
using namespace std;
int main(){
    const int n=5;
    int k[n];
    int N[n];
    int r;
    for(int i = 0; i < n; i++){
        cin>>k[i];
    }
    cout<<"----"<<endl;
    for(int i = 0; i < n; i++){
        cin>>N[i];
    }
    int sum=0,sum2=0;
    for(int i = 0; i < n; i++){
        sum+=k[i];
    }
    for(int i = 0; i < n; i++){
        sum2+=N[i];
    }
    r=sum+sum2;
    cout<<"Result="<<r<<endl;
}