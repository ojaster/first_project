#include <iostream>
using namespace std;
int main(){
    const int n=3;
    int k[n];
    //index1 - индекс первого отрицательного элемента
    //index2 - индекс последнего положительного элемента
    int index1 = -1, index2 = -1;
    for(int i=0; i<n;i++){
        cin>>k[i];
    }

    for(int i=0; i<n;i++) {
        if(k[i]<0 && index1==-1){//пока не нашли отрицательный элемент index1= -1
            index1=i;//как только нашли первый отрицательный элемент index1 =  положительное число
        }
        if(k[i]>0){
            index2=i;
        }
    }

    cout<<"answer:"<<endl;
    for(int i=0; i<n;i++){
        cout<<"i="<<i<<":"<<k[i]<<endl;
    }

    cout<<index1<<" "<<index2<<endl;
    if(index1>=0 && index2>=0) {
        cout<<"ok"<<endl;
        int temp = k[index1];//сохраняем первый отрицательный элемент
        k[index1]= k[index2];//на место первого отрицательного элемента записываем последний положительный элемент
        k[index2]= temp;//на место последнего положительного элемента записываем temp
        cout<<"answer:"<<endl;
        for(int i=0; i<n;i++){
            cout<<"i="<<i<<":"<<k[i]<<endl;
        } 
    }else{
        cout<<"no"<<endl;
    }
}