#include <iostream>
using namespace std;
int main(){
    int n[8],k[8];
    for(int i=0; i<8; i++){
        cin>>n[i];
        
    }
    int j=0;
    for(int i=0; i<8; i++){
        if(i%2==0){
            k[j] = n[i];
            j++;
        }
    }
    cout<<"-------"<<endl;
    for(int i=0; i<j;i++){
        cout<<k[i]<<endl;
    }
       
}