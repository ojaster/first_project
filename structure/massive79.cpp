#include <iostream>
using namespace std;
int main(){
    const int n=9;
    int k[n];
    int sum=0,sum2=0,r;
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    for(int i =0; i<n; i++){
        if(i%2==0){
            sum+=k[i];
        }
        if(i%2!=0){
            sum2+=k[i];
        }  
    }
    cout<<"---------"<<endl;
    cout<<sum<<endl;
    cout<<"######"<<endl;
    cout<<sum2<<endl;
    cout<<"---------"<<endl;
    r=sum2%sum;
    cout<<r<<endl;
}