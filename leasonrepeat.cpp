#include <iostream>
using namespace std;
int main(){
   int a,b;
   cout<<"a=";
   cin>>a;
   cout<<"b=";
   cin>>b;
   for(int i = a; i <= b; i++) {
       if(i%2==0){
         cout<<i<<endl;
       }   
   }

}