#include <iostream>
using namespace std;
int main(){
    int n, i = 0;
    cin>>n; // 27 1*1*1 , 2*2*2 , 3*3*3 
    int find = 0; //не является
    while(i < n/2){ // i=0, i=1, i=2 .... i=n/2
       if(i*i*i==n){
        find = 1;
        break;
       } 
       i++;
    }

    if(find){
        cout<<"true:"<<i<<endl;
    }else{
        cout<<"false";
    }

}