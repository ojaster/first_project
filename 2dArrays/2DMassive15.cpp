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

int s;
cout<<"----"<<endl;
cin>>s;
if(s>=0 && s<=n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cout<<k[i][s]<<"\t";
        }
        cout<<endl;
    }

}else{
    cout<<"no"<<endl;
}
}