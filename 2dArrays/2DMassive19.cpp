#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=4;
    int k[n][n];
    int sum=0;
    int r,b,g,d;
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
    g = k[3][0];
    d = k[0][3];
    sum=r+b+g+d;
    sum/=4;
    cout<<sum<<endl;

}