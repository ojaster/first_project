#include <iostream>
using namespace std;
int main(){
    int a, b =1; //так ищем произведение цифр ( если взять 0 то результат 0)
    cin>>a;//считываем число с клавиатуры 124 
    while(a>0)// пока число не превратится в ноль
    {
        int digit = a%10; //вычисляем последнюю цифру числа 1
        b = b * digit;  // b = 8
        a = a/10; // 124 -> 12 -> 1
    }

    cout<< b<< endl;

    
    
}