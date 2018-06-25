#include <iostream>
using namespace std;
int main(){
    int n,x,max=0, is_exist = 0;
    cin>>x;
    for(int i = 0; i < x; i++){
        cin>>n;
        if(n > max){
            max = n;
        }
        if(n<30){
            is_exist = 1;
        }
    }
    cout<<"---"<<endl;
    cout<<max<<endl;
    cout<<"---"<<endl;
    if(is_exist == 1){
        cout<<"yes";
    }else{
        cout<<"no";
    }
     
     
    
    
    
}