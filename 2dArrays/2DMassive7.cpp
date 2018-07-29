#include <iostream>
using namespace std;
int main(){
    const int n=5;
    int k[n],N[n];
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    cout<<"---"<<endl;
    for(int i=0;i<n;i++){
        cin>>N[i];
    }
    // -3 4 5 3 k
    //-2 4 5 -3 
    // 1 1 1 0
    int K[n];
    int j=0;
    for(int i=0;i<n;i++){
        if((k[i]>0 && N[i]>0 )|| (k[i]<0 && N[i]<0)){
            N[j++]=1;
        }else{
            N[j++] = 0;
        }
    }
    cout<<"---"<<endl;
    for(int i=0; i<n; i++){
        cout<<N[i]<<endl;
    }

}