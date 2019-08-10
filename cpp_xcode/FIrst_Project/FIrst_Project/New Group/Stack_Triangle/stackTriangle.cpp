////
////  stackTriangle.cpp
////  FIrst_Project
////
////  Created by Данил on 04/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include "stackTriangle.hpp"
//#include "Tstack.h"
//#include "Params.hpp"
//#include <iostream>
//using namespace std;
//class TriangleUp{
//    int theNum;
//    int theAnswer;
//    int codePart;
//    Params  * theseParams;
//    TStack<Params> * theStack;
//public:
//    void start();
//    void recTriangle();
//    bool step();
//    
//};
//void TriangleUp::start(){
//    theNum = 5;
//    
//}
//void TriangleUp::recTriangle(){
//    theStack = new TStack<Params>(10000);
//    codePart = 1;
//    while(step() == false){
//        ;
//    }
//}
//bool TriangleUp::step(){
//  
//    if(codePart ==1){ //исходный вызов
//            theseParams = new Params(theNum, 6);
//            theStack->push(theseParams);
//            codePart = 2;
//    }
//       if(codePart == 2){//вход в метод
//            theseParams->n  = theStack->peek().n;
//            theseParams->returnAddress  = theStack->peek().returnAddress;
//            if(theseParams->n == 1){
//                theAnswer = 1;
//                codePart = 5;
//            }else{
//                codePart = 3;
//            }
//       }
//       if(codePart == 3){
//            Params * newParams = new Params(theseParams->n-1,4);
//            theStack->push(newParams);
//            codePart = 2; //вход в метод
//       }
//       if(codePart == 4){//вычисление
//            theseParams->n  = theStack->peek().n;
//            theseParams->returnAddress  = theStack->peek().returnAddress;
//            theAnswer = theAnswer + theseParams->n;
//            codePart = 5;
//       }
//         if(codePart == 5){//выход из метода
//            theseParams->n  = theStack->peek().n;
//            theseParams->returnAddress  = theStack->peek().returnAddress;
//            codePart = theseParams->returnAddress;// (4, 6)
//         }
//    if(codePart == 6){
//        return true; // точка возврата
//    }
//    return false;
//}
//
