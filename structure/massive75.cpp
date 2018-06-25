#include <iostream>
using namespace std;
int main(){
    const int n=7;
    int k[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    int left = -1 ,right = 0;
    for(int i =0; i<n; i++){
        if(k[i]<0){
            left = i;
            break;
        }
    }
    for(int i =0; i<n; i++){
        if(k[i]==0){
            right = i;
            break;
        }
    }
    int sum=0;
    for(int i = left + 1; i<right; i++){
        sum += k[i];
        cout<<k[i]<<endl;
    }
    cout<<"---------"<<endl;
    cout<<"sum="<<sum<<endl;
}