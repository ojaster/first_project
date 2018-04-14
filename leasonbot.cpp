#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    switch(n){
        case 1:
        cout<<"west"<<endl;
        break;
        case 2:
        cout<<"east"<<endl;
        break;
        case 3:
        cout<<"north"<<endl;
        break;
       default:
       cout<<"ERROR"<<endl;
    }

}