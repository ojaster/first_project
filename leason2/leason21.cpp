#include <iostream>
using namespace std;
int main(){
    int n, x, find=0;
    cin>>n;
    while(n>0){
        x = n%10;//сохраняем последнюю цифру
        if(x%2!=0){ // 45 % 2 = 1 
            find = 1;
            break;
        }
        n = n/10;
    }
    if(find){
        cout<<"true";
    }else{
        cout<<"false";
    }
}