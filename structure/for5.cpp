#include <iostream>
using namespace std;
int main(){
    int n,x,a,min=30000;
    do{
        cout<<"input n:";
        cin>>n;
    }while(n<=0);
    for(int i = 0; i < n; i++){
        cin>>x;
       
        if(x<min && x%10==4){ 
           min=x;
        }
    }
    cout<<min;
}