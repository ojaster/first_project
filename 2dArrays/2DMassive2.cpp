#include <iostream>
using namespace std;
int main(){
    const int n=4;
    int k[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            k[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++){
          k[i][n-1-i]=1;
    }

    
    for(int i=0; i<n; i++){
        for(int j=n-i; j<n; j++){
            k[i][j] = 2;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }

}