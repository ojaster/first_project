#include <iostream>
using namespace std;
int main(){
    int arr[8]={37,0,50,46,34,46,0,13};
    for(int i = 0; i < 8; i++){
        cout<<arr[i]<<endl;
    }
    int arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    for(int i=0; i<10; i++){
        cout<<arr[i];
    }
}