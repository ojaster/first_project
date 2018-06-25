#include <iostream>
using namespace std;
int main(){
    int n=8;
    int k[n];
    int min=3000000,max=0,sum=0;
    for(int i=0;i<n; i++){
        cin>>k[i];
    }
    for(int i=0;i<n; i++){
        if(min>k[i]){
            min=k[i];
        }
        if(k[i]>max){
            max=k[i];
        }
        sum+=k[i];
    }

    sum = sum - max - min;
    cout<<sum/6.0<<endl;
}