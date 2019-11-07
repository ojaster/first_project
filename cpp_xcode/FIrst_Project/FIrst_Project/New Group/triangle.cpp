////
////  triangle.cpp
////  FIrst_Project
////
////  Created by Данил on 19/10/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <math.h>
//using namespace std;
//class Myexception : public logic_error{
//public:
//    int a,b,c;
//    Myexception(int d, int i, int f,string name):logic_error(name),a(d),b(i),c(f){}
//};
//double pFunct(int a, int b, int c){
//    return (a + b + c) / 2;
//}
//double tirangle(int a, int b, int c) throw(Myexception){
//    double p = pFunct(a, b, c);
//    double tempResult = p * ((p - a) * (p - b) * (p - c));
//    tempResult = -90;
//    if(tempResult < 0){
//        Myexception x(a, b, c, "triangle");
//        throw x;
//    }
//    return sqrt(tempResult);
//}
//int main(){
//    int b = 0;
//    try{
//        b = tirangle(-435, -555, -988);
//    }catch(Myexception ex){
////        cout<<"eror has occured in function:"<<ex.functionName<<endl;
//        cout<<"with values:"<<ex.a<<","<<ex.b<<","<<ex.c<<endl;
//        cout<<ex.what()<<endl;
//    }
//}
