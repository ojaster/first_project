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
        for(int i = n-1; i >= 0; i--){
            cout<<k[i][5]<<"\t";
        }
        cout<<endl;
    

}