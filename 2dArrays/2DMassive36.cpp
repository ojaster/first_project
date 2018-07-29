#include <iostream>
using namespace std;
int main(){
    const int n=8;
    int k[n][n];
    int g = 1;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            k[i][j] = g++;
           // cout<<k[i][j]<<"\t";
        }
       // cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }


}