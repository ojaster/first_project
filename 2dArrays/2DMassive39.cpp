#include <iostream>
using namespace std;
int main(){
    const int n=8;
    int k[n][n];
    int g = 0;
    int temp = 1;
    for(int j=0;j<n;j++){
        if(j % 2 == 0 ){
            for(int i = 0; i < n; i++){
                k[i][j] = temp++;
            }
        }else{
           for(int i = n-1; i >= 0; i--){
                k[i][j] = temp++;
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