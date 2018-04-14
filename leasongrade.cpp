#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"a=";
    cin>>a;
    switch(a){ //В качестве параметра для оператора switch можно подать целое число или символ switch(5.6) -> НЕ будет работать
    case 1:
            cout<<"very bad";
            break;
    case 2:
            cout<<"bad";
            break;
    case 3:
            cout<<"normal";
            break;
    case 4:
            cout<<"good";
            break;
    case 5:
            cout<<"amazing";
            break;
     default:
            cout<<"error"<<endl;
            break;

    }   

    
}