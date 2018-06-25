#include <iostream>
using namespace std;
int main(){
    int k[8];// 80 70 60 50
    int h = 80; 
    for (int i = 0; i < 8; i++){
        k[i] = h;
        h+=10;
    }
    for(int i; i < 8; i++){
        cout<<k[i]<<endl;
    }
    
  
    
    
}