#include <iostream>
using namespace std;
int main(){
    int k[20];
    int j = 20;
    for(int i = 0; i < 20; i++){// i ={0,1,2....11}
        k[i] = j--; // i++   ++i
    }
    for(int i = 0; i < 20; i++){
        cout<<k[i]<<endl;
    }
      
}