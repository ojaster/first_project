#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    int max=0;
    int index;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(k[i]>max && k[i]>0 && k[i]%2!=0){
            max=k[i];
            index=i;
            
        }
    }
    cout<<index<<endl;
    cout<<max<<endl;
}