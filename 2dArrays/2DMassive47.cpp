#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%10;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----"<<endl;
    int b;
    cin>>b;
    cout<<"----"<<endl;
    for(int i=0; i<n; i++){
        sum += k[i][b-1];
    }

    cout<<sum/5.0<<endl;
}