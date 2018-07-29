#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=6;
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
    sum=k[r-1][1] + k[d-1][1];
    cout<<sum<<endl;
    r=0;
    d=0;
    sum=0;
    cout<<"----"<<endl;
    cin>>r;
    cout<<"----"<<endl;
    cin>>d;
    cout<<"----"<<endl;
    sum=k[r-1][4] + k[d-1][4];
    cout<<sum<<endl;
}