#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=6;
    int k[n][n];
    int r,d,s,b;
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
    if(k[0][0]>k[5][5]){
        cout<<"1"<<endl;
    }else{
        cout<<"2"<<endl;
    }
    if(k[0][0]<k[5][5]){
        cout<<"1"<<endl;
    }else{
        cout<<"2"<<endl;
    }
}