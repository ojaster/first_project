#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%10;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int j=0; j<n; j++){
        sum += k[0][j];
    }

    cout<<sum/5.0<<endl;
}