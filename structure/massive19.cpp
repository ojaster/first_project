#include <iostream>
using namespace std;
int main(){
    int a[6];
    int mult=1;
    for(int i=0; i<6; i++){
        cin>>a[i];
        if(i % 2 != 0){
            mult=mult*a[i];
        }
    }
    cout<<"----"<<endl;
    cout<<mult<<endl;
}