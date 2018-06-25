#include <iostream>
using namespace std;
int main(){
    const int n=10;
    int k[n];
    int sum=0;
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    for(int i =0; i<n; i++){
        sum+=k[i];
    }
    float av=sum/(float)n; // 7/(float)3.0
    cout<<"av="<<av<<endl;
    int j=0;
    for(int i =0; i<n; i++){
        if(k[i]>av){
            j++;
        }
    }
    cout<<"j="<<j<<endl;

    float result = (j/(float)n)*100.0;
    cout<<"result="<<result<<"%"<<endl;
}