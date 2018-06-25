#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    cout<<"d=";
    cin>>d;
    for(int i = a; i <= b; i++) {
       if(i % d == c){
         cout<<i<<endl;
       }   
   }
}