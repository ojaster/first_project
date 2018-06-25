#include <iostream>
using namespace std;
int main(){
    int const n=3;
    int k[n];
    int max=0,min=3000000;
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(max<k[i]){
            max=k[i];
        }
        if(min>k[i]){
            min=k[i];
        }
    }
    cout<<"-------"<<endl;
    cout<<min<<endl;
    cout<<max<<endl;  
    

}