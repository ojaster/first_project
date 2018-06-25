#include <iostream>
using namespace std;
int main(){
    int k[100];
    //считать количетво бутылок
    int n;
    cin>>n;
    // считываем содержимое бутылок
    for(int i=0; i<n; i++){
        cout<<"b=";
        cin>>k[i];
    }
    int leftBorder = 0, rightBorder = 0;
    cout<<"L = ";
    cin>>leftBorder;
    cout<<"R = ";
    cin>>rightBorder;
    for(int i=0; i<n; i++){
        if(k[i]>=leftBorder && k[i]<=rightBorder){
       cout<<k[i]<<endl;
        }
    }
}