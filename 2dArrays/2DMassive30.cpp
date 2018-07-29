#include <iostream>
using namespace std;
int main(){
    const int n=9;
    int k[n][n];
    int g;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = (i+1)*(j+1);
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
}