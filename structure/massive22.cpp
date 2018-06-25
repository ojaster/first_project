#include <iostream>
using namespace std;
int main(){
    int a[5];
    int exist = 0;
    for(int i=0; i<5; i++){
        cin>>a[i];
    }

    for(int i=0; i<4; i++){
        if((a[i]<0 && a[i+1]<0) || (a[i]>0 && a[i+1]>0)){
           //cout<<a[i] <<"\t"<<a[i+1]<<endl;
            exist = 1;
        }
    }

    if(exist==1){
        cout<<"yes"<<endl;

    }else{
        cout<<"no"<<endl;
    }
}