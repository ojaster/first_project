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

int s,b,f;
cout<<"----"<<endl;
cin>>s;
cout<<"----"<<endl;
cin>>f;
cout<<"----"<<endl;
cin>>b;
cout<<"----"<<endl;
if(s>=0 && s<=n){
k[s-1][f-1]=b;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }

}else{
    cout<<"no"<<endl;
}
}