#include <iostream>
using namespace std;
int main(){
    int k[5];
    int l=0;
    for(int i = 0; i<5; i++){
        cin>>k[i];
    }

    for(int i=0; i<4; i++){
        if(k[i]<k[i+1]){// index of range
            l++;
        }
    }
    cout<<"-----"<<endl;
    cout<<l;
}