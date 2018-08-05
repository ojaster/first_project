#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=6;
    int k[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            k[i][j] = rand()%30;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----"<<endl;
    int h;
    cin>>h;
    cout<<"----"<<endl;
        for(int j=0; j<n; j++){
            cout<<k[h][j]<<"\t";
        }
        cout<<endl;
    

}