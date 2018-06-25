#include <iostream>
using namespace std;
int main(){
    int const n =5; 
    int k[n];
    for(int i=0; i<n; i++){
      cin>>k[i];
    }
    int d; 
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(k[i]==k[j]){
              d=k[i];
              break;
            }
        }
    }
      
    
    cout<<"------"<<endl;
    cout<<d<<endl;
    
   
}