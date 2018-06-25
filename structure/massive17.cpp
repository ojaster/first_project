#include <iostream>
using namespace std;
int main(){
    int k[6];
    for(int i = 0; i<6; i++){
      cin>>k[i];
    } 
    int last = k[5];
   cout<<"----"<<endl;
    for( int i = 0; i<6; i++ ) {
        k[i]= k[i] * (int) last;
        cout<<k[i]<<endl;
    }
    
}