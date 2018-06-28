#include <iostream>
using namespace std;
int main(){
    const int n=5;
    int arr1[n];
    int arr2[n];
    int arr3[n];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"-----"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    for(int i = 0; i < n; i++){
        if((arr1[i]>0 && arr2[i]>0)||(arr1[i]<0 && arr2[i]<0)) {
            arr3[i] = 1;
        }else{
            arr3[i] = 0;
        }
    }
    cout<<"-----"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr3[i]<<endl;
    }
    

}