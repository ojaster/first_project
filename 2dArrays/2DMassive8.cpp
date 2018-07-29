#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=4;
    int k[n][n];
    int r;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = rand()%20;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    r = k[0][3];
    cout<<r<<endl;
    r=0;
    r = k[3][0];
    cout<<r<<endl;
}