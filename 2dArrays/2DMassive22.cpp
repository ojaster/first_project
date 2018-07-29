#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){
    int sum=0;
    const int n=5;
    int k[n][n];
    int a,b;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            k[i][j]= rand()%200-100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----"<<endl;
    cin>>a;
    cout<<"----"<<endl;
    cin>>b;
    cout<<"----"<<endl;
    if((abs((long)k[0][4])>abs((long)k[a-1][b-1]))){
        cout<<"1"<<endl;
    }else{
        cout<<"2"<<endl;
    }
}