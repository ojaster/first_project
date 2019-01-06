#include <iostream>
using namespace std;
int main(){
    const int n=5;
    float k[n];
    float N[n];
    float totalResult[n];
    float sTotal = 0.0;
    float wTotal = 0.0;
    for(int i = 0; i < n; i++){
        cin>>k[i];
    }
    cout<<"----"<<endl;
    for(int i = 0; i < n; i++){
        cin>>N[i];
    }
    cout<<"----"<<endl;
   for(int i = 0; i < n; i++){
       cout<<"район="<<(i+1)<<endl;
       //cout<<N[i]/k[i]<<endl;
       totalResult[i] = N[i] / k[i];
       sTotal+=N[i];
       wTotal+=k[i];
    }

    cout<<"----"<<endl;
    cout<<"Total:"<<endl;
    cout<<wTotal/sTotal<<endl;

}