#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a[3];
    int min;
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    min=abs(a[0]);
    for(int i=0; i<3; i++){
        if(abs(a[i]) < min){
            min=abs(a[i]);            
        }
    }
    cout<<"#####"<<endl;
    cout<<min<<endl;
}