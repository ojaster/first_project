#include <iostream>
using namespace std;
int main(){
    int k[30];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k[i];
        
    }
    cout<<"--------------"<<endl;
for(int i=0;i<n;i++){   
        if(k[i]%2==0){
        cout<<k[i]<<endl;
        }
        
    }
    cout<<"-------"<<endl;

    for(int i=0;i<n;i++){
        if(k[i]%2!=0){
        cout<<k[i]<<endl;
        }
    }
    

}