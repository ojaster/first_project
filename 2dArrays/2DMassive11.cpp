#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = rand()%60;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }

int s;
cout<<"----"<<endl;
cin>>s;
cout<<"----"<<endl;
if(s>=0 && s<=n){
k[4][s-1]=1949;
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