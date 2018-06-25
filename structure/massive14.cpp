#include <iostream>
using namespace std;
int main(){
    float k[6];
    for(int i = 0; i<6; i++){
      cin>>k[i];
    
    } 
    float first = k[0];
   cout<<"------"<<endl;
    
    for( int i = 0; i<6; i++ ) {
        k[i]= k[i] / (float) first;
        cout<<k[i]<<endl;
    }
    
}