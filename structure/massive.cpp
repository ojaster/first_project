#include <iostream>
using namespace std;
//Одномерный массив - последовательность элементов {3,5,6,7,8,8} = arr
int main(){
    int arr[4]; // 0[~] 1[~] 2[~] 3[~] индексы 1,2,3,4
    arr[0] = 55;
    cout<<arr[0]<<endl;
    arr[0] += 5;
    cout<<arr[0]<<endl;
    arr[1] = 2;
    cout<<arr[1]<<endl;
    arr[1] +=2;
    cout<<arr[1]<<endl;
    cout<<arr[20]<<endl;
    int arr2[] = {4,5,6,6,7,8,8};
    int n = 7;
    cout<<endl;
    for(int i=0; i<n; i++){
        arr2[i] += 10;
        cout<<arr2[i]<<endl;
    }
}