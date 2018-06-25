#include <iostream>
using namespace std;
int main(){
    int d=1000,month=1;
    float a;
    cin>>a;
    
    while(d<1100){
      d = d + a * d; // a= %
      month++;
    }
     cout<<month<<" "<<d<<endl;

}