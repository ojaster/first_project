#include <iostream>
using namespace std;
int main(){
    int const n=6;
    int k[n];
    int sum=0,m;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(k[i]>0){
                sum+=k[i]; 
                m++;
            }
        }
    }
    cout<<m<<endl;
    cout<<sum<<endl;
}