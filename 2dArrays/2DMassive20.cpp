#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=4;
    int k[n][n];
    int sum=0,r,d;
    int g;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = rand()%100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----"<<endl;
    cin>>r;
    cout<<"----"<<endl;
    cin>>d;
    cout<<"----"<<endl;
    sum=k[r-1][2] + k[d-1][2];
    cout<<sum<<endl;
    r=0;
    d=0;
    cout<<"----"<<endl;
    cin>>r;
    cout<<"----"<<endl;
    cin>>d;
    cout<<"----"<<endl;
    g=k[1][r-1] * k[1][d-1];
    cout<<g<<endl;
    
}