#include <iostream>
using namespace std;
int main(){
    int n,x,sum=0;
    cin>>n;
    for(int i=0; i < n; i++){
        cin>>x;
        if(x%6==0){
            sum=sum+x;
        }
    }
    cout<<sum;
}