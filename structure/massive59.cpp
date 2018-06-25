#include <iostream>
using namespace std;
int main(){
    int const n=10;
    int k[n];
    int max=0,min=999999;
    int index1,index2;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(k[i] >= max){
            max=k[i];
            index1=i;
        }
        if(min >= k[i]){
            min=k[i];
            index2=i;
        }
    }
    cout<<"-------"<<endl;
    cout<<index1<<endl;
    cout<<index2<<endl;
}