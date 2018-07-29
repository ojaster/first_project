#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = rand()%100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
int a;
cout<<"----"<<endl;
cin>>a;
int s,r;
cout<<"----"<<endl;
cin>>s;
cout<<"----"<<endl;
if(s>=0 && s<=n){
k[s-1][a-1]=r;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<r<<endl;

}else{
    cout<<"no"<<endl;
}
}