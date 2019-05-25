////
////  Calculator.cpp
////  FIrst_Project
////
////  Created by Данил on 22/05/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Calculator{
//private:
//    double a;
//    double b;
//    int time;
//    double resultSafe;
//public:
//
//    void showResult()const;
//    double plus();
//    double minus();
//    double divide();
//    double tell();
//    double squareCube();
//    void firstNumber();
//    void secondNumber();
//    void aC();
//
//    void center();
//    double circleSquare();
//    double square();
//    double squareTriangle();
//    double squareSquare();
//    Calculator();
//    double cylinderVolume();
//    double sphereVolume();
//    double coneVolume();
//    double pyramidVolume();
//    double cubeVolume();
//
//};
//void Calculator::aC(){
//    a = 0;
//    b = 0;
//    resultSafe = 0;
//    showResult();
//}
//void Calculator::secondNumber(){
//    cout<<"Enter b:";
//    cin>>b;
//}
//void Calculator::showResult()const{
//    cout<<resultSafe<<endl;
//}
//double Calculator::plus(){
//    if(time == 0){
//       secondNumber();
//        resultSafe = a + b;
//        time++;
//    }else{
//        firstNumber();
//        resultSafe = a + resultSafe;
//    }
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//
//double Calculator::minus(){
//    if(time == 0){
//        secondNumber();
//        resultSafe = a - b;
//        time++;
//    }else{
//        firstNumber();
//        resultSafe = a - resultSafe;
//    }
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//
//double Calculator::divide(){
//    if(time == 0){
//        secondNumber();
//        resultSafe = a / b;
//        time++;
//    }else{
//        firstNumber();
//        resultSafe = a / resultSafe;
//    }
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//
//double Calculator::tell(){
//    if(time == 0){
//        secondNumber();
//        resultSafe = a * b;
//        time++;
//    }else{
//        firstNumber();
//        resultSafe = a * resultSafe;
//    }
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//double Calculator::squareCube(){
//    resultSafe = a * a;
//    time++;
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//void Calculator::firstNumber(){
//    cout<<"Enter a:";
//    cin>>a;
//}
//double Calculator::sphereVolume(){
//    cout<<"Enter radius"<<endl;
//    firstNumber();
//    a = a * a * a;
//    resultSafe = (4 / 3) * 3.1415926535 * a;
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//double Calculator::pyramidVolume(){
//    cout<<"Enter Base's length"<<endl;
//    firstNumber();
//    cout<<"Enter Base's width"<<endl;
//    secondNumber();
//    double c = a * b;
//    cout<<"Enter height"<<endl;
//    firstNumber();
//    resultSafe = (c * a)/3;
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//double Calculator::cubeVolume(){
//    cout<<"Enter height"<<endl;
//    firstNumber();
//    cout<<"Enter weidth"<<endl;
//    secondNumber();
//    double c = a * b;
//    cout<<"Enter length"<<endl;
//    firstNumber();
//    resultSafe = c * a;
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//double Calculator::coneVolume(){
//    cout<<"Enter radius"<<endl;
//    firstNumber();
//    cout<<"Enter height"<<endl;
//    secondNumber();
//    resultSafe = (1 / 3) * 3.1415926535 * (a * a) * b;
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//void Calculator::center(){
//    int choose = 1;
//    while(choose !=0){
//        cout<<"[1][2][3][4][5]"<<endl;
//        cout<<"[●][∎][▲][❒][=]"<<endl;
//        cout<<"[6][7][8][9][10]"<<endl;
//        cout<<"[●*h][S][C][CV][P]"<<endl;
//        cout<<"[0]"<<endl;
//        cout<<"[NC]"<<endl;
//        cout<<"enter choose"<<endl;
//        cout<<":";
//        cin>>choose;
//        switch(choose){
//            case 1:
//                circleSquare();
//                break;
//            case 2:
//                square();
//                break;
//            case 3:
//                squareTriangle();
//                break;
//            case 4:
//                squareSquare();
//                break;
//            case 5:
//                showResult();
//                break;
//            case 6:
//                cylinderVolume();
//                break;
//            case 7:
//                sphereVolume();
//                break;
//            case 8:
//                coneVolume();
//                break;
//            case 9:
//                cubeVolume();
//                break;
//            case 10:
//                pyramidVolume();
//                break;
//        }
//    }
//
//}
//Calculator::Calculator(){
//    a = 0;
//    b = 0;
//    time = 0;
//    resultSafe = 0;
//    cout<<"instructions:"<<endl;
//    cout<<"First input: input first value what will be used to count it with b"<<endl;
//    cout<<"Then will appear a window where you can see funktions and above them numbers that you need to enter with the keyboard to run this funktion"<<endl;
//    cout<<"G = Geometry. That mean that you change normal calculator and open the Geometry calculator"<<endl;
//    cout<<"When you entered your choose calculator will request from you second value"<<endl;
//    cout<<"after then you entered two values you can use result of value a and b again"<<endl;
//
//    cout<<"in geometry calculator you can see diferent symbols like ● if you see full painted symbol that mean that in this funktion is counting pint-ala and same thing if symbol is 3D, expect 4"<<endl;
//    cout<<"in the geometry calculator is symbol NC that mean that you get back to normal calculator"<<endl;
//    cout<<"S = Sphere volume"<<endl;
//    cout<<"C = Cone volume"<<endl;
//    cout<<"CV = Cube Volume"<<endl;
//    cout<<"P = Pyramid Volume"<<endl;
//
//}
//double Calculator::cylinderVolume(){
//    cout<<"Enter height"<<endl;
//    firstNumber();
//    cout<<"Enter radius"<<endl;
//    secondNumber();
//    resultSafe = 3.1415926535 * (a * a) * b;
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//double Calculator::squareSquare(){
//    double c;
//    cout<<"Enter height"<<endl;
//    firstNumber();
//    cout<<"Enter width"<<endl;
//    secondNumber();
//    cout<<"Enter length"<<endl;
//    cout<<"Enter c:";
//    cin>>c;
//    resultSafe = c * a * b;
//    showResult();
//    return resultSafe;
//}
//double Calculator::square(){
//    cout<<"Enter height"<<endl;
//    firstNumber();
//    cout<<"Enter width"<<endl;
//    secondNumber();
//    resultSafe = a * b;
//    showResult();
//    return resultSafe;
//}
//double Calculator::circleSquare(){
//    cout<<"Enter circle radius"<<endl;
//    firstNumber();
//    resultSafe =  3.1415926535 * (a * a) * b;
//    cout<<"Result:";
//    showResult();
//    return resultSafe;
//}
//
//double Calculator::squareTriangle(){
//    cout<<"Enter height"<<endl;
//    firstNumber();
//    cout<<"Enter width"<<endl;
//    secondNumber();
//    resultSafe = (a * b) / 2;
//    return resultSafe;
//}
////int main(){
////    Calculator cal;
////    int choose = 1;
////    cal.firstNumber();
////    while(choose!=0){
////        cout<<"[1][2][3][4][5]"<<endl;
////        cout<<"[+][-][/][*][=]"<<endl;
////        cout<<"[6][7][8][0]"<<endl;
////        cout<<"[√][AC][G][off]"<<endl;
////        cout<<"Enter your choose"<<endl;
////        cout<<":";
////
////        cin>>choose;
////        switch(choose){
////            case 1:
////                cal.plus();
////                break;
////            case 2:
////                cal.minus();
////                break;
////            case 3:
////                cal.divide();
////                break;
////            case 4:
////                cal.tell();
////                break;
////            case 5:
////                cal.showResult();
////                break;
////            case 6:
////                cal.squareCube();
////                break;
////            case 7:
////                cal.aC();
////                break;
////            case 8:
////                cout<<"do you want enter to the Geometry claculator. 1 = yes, 2 = no"<<endl;
////                cout<<":";
////                cin>>choose;
////                if(choose == 1){
////                    cal.center();
////                }
////
////
////
////        }
////    }
////
////}
