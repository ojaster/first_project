#include <iostream>
using namespace std;
int main(){
   int n, d, dmax = 0;
   cout<<"n=";
   cin>>n;
   for(int i=0; i<n; i++){
       cout<<"dist=";
       cin>>d;
       if( d > dmax){
           dmax = d;
       }
   }
   cout<<dmax;

}