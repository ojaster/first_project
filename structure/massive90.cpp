#include <iostream>
using namespace std;
int main(){
    const int n=3;
    int k[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    int index,j=0;
    for(int i =0; i<n; i++){
        if(k[i]%13==0){
            j++;
            index=i;
            break;
        }
    }

    if(j>1){
        cout<<"----"<<endl;
        cout<<"kolv="<<j<<endl;
    }
    if(j>0){
    cout<<"----"<<endl;
    cout<<"index="<<index<<endl;
    }
    cout<<"----"<<endl;
    if(j>0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    

}