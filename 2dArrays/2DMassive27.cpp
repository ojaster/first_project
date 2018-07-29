#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=6;
    int k[n][n];
    int r,d,s,b;
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
    cin>>s;
    cout<<"----"<<endl;
    cin>>b;
    cout<<"----"<<endl;
    g=k[r-1][d-1] - k[s-1][b-1];
    cout<<g<<endl;
    g=0;
    g=k[r-1][d-1] + k[s-1][b-1] / 2;
    cout<<g<<endl;
}