#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    int sum=0,sum1=0,r;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            sum+=k[i];
        }
        if(i%3==0){
            sum1+=k[i];
        }
    }
    r=sum-sum1;
    cout<<r<<endl;
}