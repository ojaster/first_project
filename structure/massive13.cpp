#include <iostream>
using namespace std;
int main(){
    int k[6];
    int a;
    cin>>a;
    cout<<"-----"<<endl;
    for(int i = 0; i<6; i++){
      cin>>k[i];
      k[i]-=a;
    } 
   cout<<"------"<<endl;
    
    for( int i = 0; i<6; i++ ) {
        cout<<k[i]<<endl;
    }
    
}