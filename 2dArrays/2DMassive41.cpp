#include <iostream>
using namespace std;
int main(){
    const int n=10;
    int k[n][n];
    int g = 100;
    for(int j=0;j<n;j++){
        int temp = g;
        for(int i = 0; i < n; i++){
            k[i][j] = temp;
            temp+=1;
        }
       g -= 1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
}