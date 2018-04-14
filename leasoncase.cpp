#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"a=";
    cin>>a;
    switch(a){
        case 1: 
            cout<<"Понедельник";
            break;
        case 2:
            cout<<"Вторник";
            break;
        case 3:
            cout<<"wednesday";
            break;
        case 4:
             cout<<"thusday";
             break;
        case 5:
             cout<<"friday";
             break;
         case 6:
             cout<<"saturday";
             break;
        case 7:
             cout<<"sunnday";
             break;
        default:
            cout<<"error"<<endl;
            break;
    }
}