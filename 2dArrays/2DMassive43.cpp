#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    const int m=n;
    int k[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            k[i][j] = rand()%25-20;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
}