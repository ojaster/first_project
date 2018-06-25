#include <iostream>
using namespace std;
int main() {
    int const n =19;
    int k[n];
    int sum=0;
    int indeks=-1;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(k[i]<0){
            indeks = i;
            break;
        }
    }
    if(indeks>0) {
        for(int i=0; i<indeks; i++){
            sum= sum+k[i];
        } 
        cout<<sum<<endl;
    }else{ 
        cout<<"Нет отрицательных элементов!"<<endl;
    }
   
}