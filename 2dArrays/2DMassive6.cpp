#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=10;
    //const int m = 10;
    int k[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            k[i][j]=rand()%10;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }

    //Результат победителя = наибольшая сумма в строке
    int sum=0;
    int max=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum+=k[i][j];
        }
        if(sum>max){
            max = sum;
        }
        sum = 0;
    }
    cout<<max<<endl;


    int winners[n]; //одномерный массив для номеров победителей
    int amountWinners = 0;//количества победителей
    sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum+=k[i][j];
        }
        if(sum == max){
            winners[amountWinners] = i; //сохранишь номер игрока-победителя в массив
            amountWinners++;
        }
        sum = 0;
    }

    cout<<amountWinners<<endl;
    for(int i = 0; i<amountWinners; i++){
        cout<<winners[i]<<endl;
    }
}