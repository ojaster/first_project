#include <iostream>
#include <fstream>

using namespace std;

const int N = 100;

int main(){
    int arr[N];
    int n;
    ifstream myInput("test.txt"); // открываем файл на чтение
    myInput>>n; 
    for(int i = 0; i < n; i++ ) {
        myInput>>arr[i];
        cout<<arr[i]<<endl;
    }
    myInput.close(); //закрыли
}