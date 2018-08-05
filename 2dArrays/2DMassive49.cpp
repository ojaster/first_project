#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=20,m=10;
    int k[n][m];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            k[i][j]=rand()%5;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int j=0; j<n; j++){
        sum += k[5][j];
    }

    cout<<sum/10.0<<endl;
}