#include <iostream>
using namespace std;
int main(){

    int n=3;
    int a[n];
    int k[n];
    for(int i=0; i<n; i++){
        cin>>a[i];  
    }
    int j = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            k[j]=a[i];
            j++;
        }
    }
    cout<<"-----"<<endl;
    for(int i=0;i<j;i++){
        cout<<k[i]<<endl;
    }
}