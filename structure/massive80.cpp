#include <iostream>
using namespace std;
int main(){
    const int n=3;
    int k[n];
    int N[n];
    int max=0,max2=0;
    int index,index2;
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    cout<<"#######"<<endl;
    for(int i =0; i<n; i++){
        cin>>N[i];
    }
    cout<<"-----------"<<endl;
    for(int i =0; i<n; i++){
        if(k[i]>max){
            max=k[i];
            index = i;
        }
    }
   
    for(int i =0; i<n; i++){
         if(N[i]>max2){
            max2=N[i];
            index2 = i;
        }
    }
    int temp = k[index];//сохраныем максимальный элемент из первого массива
    k[index] = N[index2];//на его места записываем максимум из второго массива
    N[index2] = temp;//теперь во второй массив на место его старого максимума записываем temp



    for(int i =0; i<n; i++){
        cout<<k[i]<<endl;
    }
    cout<<"#######"<<endl;
    for(int i =0; i<n; i++){
        cout<<N[i]<<endl;
    }
    
}
