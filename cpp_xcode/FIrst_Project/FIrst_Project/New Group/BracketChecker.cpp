////
////  BracketChecker.cpp
////  FIrst_Project
////
////  Created by Данил on 23/06/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include "stack.h"
//#include <iostream>
//using namespace std;
//class BracketChecker{
//private:
//    string input;
//public:
//    BracketChecker(string str):input(str){}
//    void check(){
//        int stackSize = (int)input.size();
//        StackX s(stackSize);
//        for(int i=0; i < stackSize; i++) {//последовательное чтение
//            char simbol = input[i];//чтение символа
//            switch(simbol){
//                    case '{':
//                    case '(':
//                    case '[':
//                        s.push(simbol);
//                        break;
//                    case '}':
//                    case ')':
//                    case ']':
//                        if(!s.isEmpty()){
//                            char simbol2 = (char)s.pop();//извлечь и проверить
//                            if((simbol == '}' && simbol2 != '{' )||  (simbol == ']' && simbol2 != '[') || (simbol == ')' && simbol2 != '(')){
//                                cout<<"error"<<simbol<<":"<<i<<endl;
//                            }
//                        }else{
//                            cout<<"error"<<simbol<<":"<<i<<endl;
//                        }
//                    break;
//                default:
//                    break;
//            }
//        }
//         if(!s.isEmpty()){//если не обработаны все символы
//             cout<<"error missing right delimiter"<<endl;
//         }
//    }
//    
//};
//class BracketCheckerApp{
//private:
//    string input;
//public:
//    void start(){
//        while(true){
//            cout<<"enter a string"<<endl;
//            cin>>input;
//            if(input.size()>2){
//                break;
//            }
//        }
//        BracketChecker s(input);
//        s.check();
//    }
//};
//int main(){
//    BracketCheckerApp a;
//    a.start();
//}
