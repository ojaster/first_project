#include <iostream>
using namespace std;
int main(){
    const int n=10;
    int k[n][n];
    int g = 100;
    for(int i=0;i<n;i++){
        int temp = g;
        for(int j = 0; j < n; j++){
            k[i][j] = temp;
            temp+=1;
        }
       g -= 10;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
}