#include <iostream>
using namespace std;
int main(){
    const int n=10;
    int k[n];
    for(int i = 0; i < n; i++){
        cin>>k[i];
    }
    int j=0,jneg=0,jnol=0;
    for(int i = 0; i < n; i++){
        if(k[i]>0){
            j++;
        }
        if(k[i]<0){
            jneg++;
        }
        if(k[i]==0){
            jnol++;
        }
    }
    float r;
    r=j/10.0;
    r=r*100;
    cout<<r<<"%"<<endl;
    float rneg;
    rneg=jneg/10.0;
    rneg=rneg*100;
    cout<<rneg<<"%"<<endl;
    float rnol;
    rnol=jnol/10.0;
    rnol=rnol*100;
    cout<<rnol<<"%"<<endl;
}
