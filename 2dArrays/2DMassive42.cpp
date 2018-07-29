#include <iostream>
using namespace std;
int main(){
    const int n=10;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j = 0; j < n; j++){
            if((i+j)%2==0){
                k[i][j]=0;
            }else{
                k[i][j]=1;
            }
        }

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
}