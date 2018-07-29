#include <iostream>
using namespace std;
int main(){
    const int n=7;
    int k[n][n];
    int g;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = 0;
           // cout<<k[i][j]<<"\t";
        }
        //cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                k[i][j]=1;
            }
        }
    }
      
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                k[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                k[i][3]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j && i+j>n-1){
                k[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j && i+j<n-1){
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