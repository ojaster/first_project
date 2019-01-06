#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=9;
    int k[n];
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=0; i<n; i++){
       k[i] = rand()%(b-a)+a;
    }
    for(int i=0; i<n; i++){
      cout<<k[i]<<endl;
    }
    
    int j=n-1;    //индекс последнего элемента
    for(int i = 0; i < n/2; i++){
      int temp=k[j];//менять элементы относительно центрального
        k[j]=k[i];
        k[i]=temp;
        j--;
    }
    cout<<"----"<<endl;
    for(int i=0; i<n; i++){
      cout<<k[i]<<endl;
    }
    // 1 2 4 5 3
    // 3 2 4 5 1
    // 3 5 4 2 1

}