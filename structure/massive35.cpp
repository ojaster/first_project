#include <iostream>
using namespace std;
int main(){
    int n[8],k[8];
    for(int i=0; i<8; i++){
        cin>>n[i];
        
    }
    // найдем последнее нечетное число
    int x = 0;
    for(int i=0; i<8; i++){
        if(n[i]%2==0){
            x=n[i];
        }
    }


    for(int i=0; i<8; i++){
        if(n[i]%2==0){
            n[i]=x+n[i];
        }
    }

    for(int i=0; i<8; i++){
        if(n[i]%2!=0){
            x=n[i];
        }
    }

    for(int i=0; i<8; i++){
        if(n[i]%2!=0){
            n[i]=x+n[i];
        }
    }
    cout<<"-------"<<endl;
    for(int i=0; i<8;i++){
        cout<<n[i]<<endl;
    }
       
}