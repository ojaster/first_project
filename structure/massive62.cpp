#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    int sum=0, count = 0;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    //Находим сумму положительных чисел и их количество
    for(int i=0; i<n; i++){
        if(k[i]>0){
            sum=sum+k[i];
            count++;
        }
    }
    //Находим среднее арифметическое
    float av = sum / count;

    int sum2 = 0, count2 = 0; //сумма и количество элементов модуль которых больше av
    for(int i=0; i<n; i++){
        if(abs(k[i]) > av) { //если модуль текущего числа больше СА
            sum2 += k[i]; //прибавляем его к сумме
            count2++;
        }
    }
    cout<<"sum="<<sum2<<endl;
    cout<<"count="<<count2<<endl;

}