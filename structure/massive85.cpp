#include <iostream>
using namespace std;
int main(){
    const int n=6;
    int k[n];
    int min;
    for(int i =0; i<n; i++){
        cin>>k[i];
    }

    min = k[0];
    int index,sum=0;
    for(int i =0; i<n; i++){
        if(k[i]<min){
            min=k[i];
            index=i;
        }
    }
    cout<<"------"<<endl;
    sum=index+min;
    cout<<sum<<endl;
}