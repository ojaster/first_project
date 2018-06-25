#include <iostream>
using namespace std;
int main(){
    int k[30];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    //a
    cout<<"A:"<<endl;
    for(int i=0; i<n; i++){
        if(k[i]%10==0){
            k[i] = 0;
        }
        cout<<k[i]<<endl;
    }

    //b
   
    for(int i=0 ;i<n; i++){
        if(k[i]%2==0){
           k[i]= k[i]*2;
        }
       
        if(k[i]%2!=0){
           k[i]= k[i]/2;
        }
    }
   cout<<"B:"<<endl;
    for(int i =0; i<n; i++){
        cout<<k[i]<<endl;
    }
    int m = 9;
    int v = 4;
    //v
    for(int i=0 ;i<n; i++){
        if(k[i]%2!=0){
           k[i]= k[i]-m;
        }
       
        if(i%2!=0){
           k[i]= k[i]+v;
        }
    }
   cout<<"V:"<<endl;
    for(int i =0; i<n; i++){
        cout<<k[i]<<endl;
    }
}