#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=4;
    int sum=0;
    int k[n][n];
    int r,b;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = rand()%100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----"<<endl;
    r = k[3][3];
    b = k[0][0];
    sum=r+b;
    cout<<sum<<endl;
    

}