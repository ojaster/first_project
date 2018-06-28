#include <iostream>
using namespace std;
int main(){
    const int n=4;
    int k[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    int index = -1;
    for(int i =0; i<n; i++){
        if(k[i]%2!=0){
            index=i;
            break;
        }
    }
    if(index>=0){
        cout<<"----"<<endl;
        cout<<"index="<<index<<endl;
    }
    if(index>=0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}