#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = rand()%20;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cout<<k[i][3]<<"\t";
        }
        cout<<endl;
    }


}