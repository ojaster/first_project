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
//class NumberPlus{
//private:
//    string number;
//    int size;
//public:
//    NumberPlus(string alphabet_ ,int  size_);
//    friend ostream & operator <<(ostream & os, const NumberPlus a);//переопределили оператор вывода для экземпляров данного класса
//    friend NumberPlus  operator +(const NumberPlus a1, const NumberPlus a2);
//    void print();
//};
//
//NumberPlus::NumberPlus(string  number_,int size_){
//    number = number_;
//    size = size_;
//}
//
//void NumberPlus::print(){
//    cout<<number<<endl;
//}
//ostream & operator <<(ostream & os, const NumberPlus a);
//ostream & operator <<(ostream & os, const NumberPlus a){
//    os<<"set=";
//    os<<a.number<<endl;
//    os<<"-----"<<endl;
//    return os;
//}
//NumberPlus  operator +(const NumberPlus a1, const NumberPlus a2);
//
//NumberPlus  operator +(const NumberPlus a1, const NumberPlus a2){
//    string m1 = a1.number;
//    string m2 = a2.number;
//    string result = "";
//    bool exist = false;
//    for(int i = 0; i < m1.size(); i++){
//        for(int j = 0; j < m2.size(); j++){
//            if(m1[i] == m2[j]){
//                exist = true;
//                break;
//            }
//        }
//        if(exist == false){
//            result += m1[i];
//        }
//        exist = false;
//    }
//    for(int i = 0; i < m2.size(); i++){
//        for(int j = 0; j < m1.size(); j++){
//            if(m2[i] == m1[j]){
//                exist = true;
//                break;
//            }
//        }
//        if(exist == false){
//            result += m2[i];
//        }
//        exist = false;
//    }
//    for(int i = 0; i < result.size() - 1; i++){
//        for(unsigned long j = result.size() - 1; j > i ; j--){
//            if(result[j-1] > result[j]){
//                int temp = result[j - 1];
//                result[j - 1] = result[j];
//                result[j] = temp;
//            }
//        }
//    }
//    return NumberPlus(result, (int)result.size());
//}
//
//
//
//int main(){
//    string m1 = "12472452";
//    string m2 = "243587";
//    NumberPlus a1(m1, (int)m1.size());
//    NumberPlus a2(m2, (int)m2.size());
//    a1 = a1 + a2;
//    cout<<a1<<endl;
//}
//
