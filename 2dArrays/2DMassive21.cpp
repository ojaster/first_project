#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int sum=0;
    const int n=5;
    int k[n][n];
    int a,b,c,d,v,g;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            k[i][j]= rand()%200;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----"<<endl;
    cin>>a;
    cout<<"----"<<endl;
    cin>>b;
    cout<<"----"<<endl;
    cin>>c;
    cout<<"----"<<endl;
    cin>>d;
    cout<<"----"<<endl;
    cin>>v;
    cout<<"----"<<endl;
    cin>>g;
    cout<<"----"<<endl;
    sum= k[a-1][b-1] + k[c-1][d-1];
    cout<<sum<<endl;
    sum=0;
    sum= k[a-1][b-1] + k[c-1][d-1]+k[v-1][g-1];
    sum/=3;
    cout<<"----"<<endl;
    cout<<sum<<endl;
    

}