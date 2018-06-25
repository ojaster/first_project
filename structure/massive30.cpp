#include <iostream>
using namespace std;
int main(){
    int k[30];
    int n,a,b,c;
    cin>>n;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"---"<<endl;
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0 ;i<n; i++){
        if(k[i]>0){
           k[i] = k[i]-a;
           
        }else if(k[i]==0){
            k[i]=k[i]+c;
  
        }
       cout<<"--"<<endl;
        if(k[i]<0){
           k[i]= k[i]-b;
        }
        cout<<k[i]<<endl;
    }
  
}