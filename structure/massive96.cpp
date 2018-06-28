#include <iostream>
using namespace std;
int main(){
    const int n =10;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    cout<<"----"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr2[i];
    }
    int sum = 0,sum2 = 0;
    for(int i = 0; i < n; i++){
        sum+=arr1[i];
    }

    for(int i = 0; i < n; i++){
        sum2+=arr2[i];
    }
    
    cout<<"----"<<endl;
        cout<<"january="<<sum<<endl;
        cout<<"march="<<sum2<<endl;
        if(sum>sum2){
            cout<<"january"<<endl;
        }else{
            cout<<"march"<<endl;
        }
    
}