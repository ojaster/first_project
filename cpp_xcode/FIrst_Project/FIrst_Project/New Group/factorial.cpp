////
////  factorial.cpp
////  FIrst_Project
////
////  Created by Данил on 30/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int factorial_S(int factorial);
//class anagramm{
//    int size;
//    string word;
//    int count;
//public:
//    anagramm(string word1):word(word1){
//        size = word1.length();
//    }
//    void rotateS(int number);
//    void factorialStringS(int newSize);
//   
//};
//
//int main(){
//    anagramm anagramm1("cat");
//    anagramm1.factorialStringS(3);
//    
//}
//int factorial_S(int factorial){
//        if(!factorial){
//            cout<<"retunign:"<<factorial<<endl;
//            return 1;
//        }else{
//            int temp = (factorial * factorial_S(factorial-1));
//            cout<<"returning:"<<temp<<endl;
//            return temp;
//        }
//
//}
//void anagramm::factorialStringS(int newSize){
//    if(newSize == 1){
//        return;
//    }
//    for(int i =0; i<newSize; i++){
//        factorialStringS(newSize - 1);
//        if(newSize == 2){
//            cout<<word<<endl;  //вывести текущее состояние
//        }
//        rotateS(newSize);//циклический сдвиг самого слова
//    }
//}
//void anagramm::rotateS(int newSize){
//    int position = size - newSize;
//    char temp = word[position];//сохранение первой буквы
//    for(int j = position +1; j<size; j++) {//сдвиг всех букв влево
//        word[j-1] = word[j];
//    }
//    word[size-1] = temp;//перемещение правой буквы на левый край
//    
//}
