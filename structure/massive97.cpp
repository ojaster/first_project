#include <iostream>
using namespace std;
int main(){
    const int n=5;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    //стоимость
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
     //мощность
    cout<<"----"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr2[i];
    }
    int j=0;
    for(int i = 0; i < n; i++){
        if(arr2[i] <= 80 ){
            arr3[j]=arr1[i];
            j++;
        }
    }
    cout<<"----"<<endl;
    for(int i = 0; i < j; i++){
        cout<<arr3[i]<<endl;
    }
}