////
////  Reverser.cpp
////  FIrst_Project
////
////  Created by Данил on 23/06/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include "stack.h"
//using namespace std;
//class Reverser{
//private:
//    string input;
//    string output;
//public:
//    Reverser(string in):input(in){}
//   string doRev(){ //перестановка символов
//       int stackSize =  static_cast<int>(input.size()) ;//опеределение размера стека
//       StackX theStack(stackSize);
//       for(int i=0 ; i<stackSize; i++){
//           char symbol = input[i];
//           theStack.push(static_cast<long>(symbol));
//       }
//       output = "";
//       while(!theStack.isEmpty()){
//           char sym = static_cast<char>(theStack.pop()); //извлечение символа из стека
//           output = output + sym;//присоединение к выходной строке
//           
//       }
//       return output;
//    }
//};
//
//class ReverserApp{
//private:
//    
//public:
//    void start(){
//        string input;
//        string output;
//        while(true){
//            cout<<"enter a string:";
//            cin>>input;
//            if(input.size() > 2){
//                break;
//            }
//            
//        }
//        Reverser theReverser(input);
//        output = theReverser.doRev();
//        cout<<"output";
//        cout<<":"<<endl;
//        cout<<output<<endl;
//    }
//};
//int main(){
//    ReverserApp sta;
//    sta.start();
//}
