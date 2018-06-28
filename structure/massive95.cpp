#include <iostream>
using namespace std;
int main(){
    const int n=5;
    int arr1[n],arr2[n],arr3[n];
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    int j=0;
    for(int i = 0; i < n; i++){
        if(arr1[i] > 0){
            arr2[j] = arr1[i];
            j++;
        }
    }

    int g = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i] <= 0){
            arr3[g] = arr1[i];
            g++;
        }
    }

    cout<<"----"<<endl;
    for(int i = 0; i < j; i++){
        cout<<arr2[i]<<endl;
    }

    cout<<"----"<<endl;
    for(int i = 0; i < g; i++){
        cout<<arr3[i]<<endl;
    }

}