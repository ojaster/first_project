#include <iostream>
using namespace std;
int main(){
    int const n=6;
    int k[n];
    int sum=0, indeks, m = 1;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            sum+=k[i];
        }
        if(k[i]%2!=0){
            m*=k[i];
        }
    }
    cout<<"sum="<<sum<<endl;
    cout<<"mult="<<m<<endl;
}