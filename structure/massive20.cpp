#include <iostream>
using namespace std;
int main(){
    int a[3];
    int min;
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    cout<<"-------"<<endl;
    min = a[0];

    for(int i=0; i<3; i++){
        if(a[i]<min && a[i]%2==0){
            min=a[i];
        }
        
    }
    if(min%2!=0){
        cout<<a[0]<<endl;
    }else{
    cout<<min<<endl;
    }
}