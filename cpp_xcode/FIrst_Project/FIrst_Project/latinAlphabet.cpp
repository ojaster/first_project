////
////  latinAlphabet.cpp
////  FIrst_Project
////
////  Created by Данил on 09/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//class Alphabet{
//private:
//    string alphabet;//[] = {"q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m"};
//    int size;
//public:
//    Alphabet(string alphabet_ ,int  size_);
//    friend ostream & operator <<(ostream & os, const Alphabet a);//переопределили оператор вывода для экземпляров данного класса
//    friend Alphabet  operator -(const Alphabet a1, const Alphabet a2);
//    void print();
//};
//
//Alphabet::Alphabet(string  alphabet_ ,int size_){
//    alphabet = alphabet_;
//    size = size_;
//}
//
//void Alphabet::print(){
//    cout<<alphabet<<endl;
//}
// ostream & operator <<(ostream & os, const Alphabet a);
//
//ostream & operator <<(ostream & os, const Alphabet a){
//    os<<"set=";
//    os<<a.alphabet<<endl;
//    os<<"-----"<<endl;
//    return os;
//}
// Alphabet  operator -(const Alphabet a1, const Alphabet a2);
//
//Alphabet  operator -(const Alphabet a1, const Alphabet a2){
//    string m1 = a1.alphabet;
//    string m2 = a2.alphabet;
//    string result = "";
//    bool exist = false;
//    for(int i = 0; i < m1.size(); i++){
//        for(int j = 0; j < m2.size(); j++){
//            if(m1[i] == m2[j]){
//                exist =true;
//                break;
//            }
//        }
//        if(exist == false){
//            result += m1[i];
//        }
//        exist = false;
//    }
//    sort(result.begin(), result.end());//самостоятельно отсортировать строку (пузырьком)
//    return Alphabet(result, (int)result.size());
//}
//
//
//
//int main(){
//    string m1 = "bca";
//    string m2 = "dfbg";
//    Alphabet a1(m1, (int)m1.size());
//    Alphabet a2(m2, (int)m2.size());
//    a1 = a1 - a2;//ac
//    cout<<a1<<endl;
//    //cout<<a2<<endl;
//}
//
