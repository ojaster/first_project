////
////  triad.cpp
////  FIrst_Project
////
////  Created by Данил on 28/05/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Triad{
//private:
//    int a = 2;
//    int b = 2;
//    int c = 2;
//    int res;
//public:
//  //  Triad(int h,int y, int u):a(h),b(y),c(u){}
//    int geta();
//    int getb();
//    int getc();
//    void r(int rr);
//    void virtual getasum() = 0;
//    void virtual getTrin() = 0;
//    void virtual square() = 0;
//};
//void Triad::r(int rr){
//    res = rr;
//}
//int Triad::geta(){
//    return a;
//}
//int Triad::getb(){
//    return b;
//}
//int Triad::getc(){
//    return c;
//}
//class Triangle:public Triad{
//private:
//    int res;
//public:
//    void virtual getasum();
//    void virtual getTrin();
//    void virtual square();
//  //  Triangle(int a, int b, int c):Triad(a,b,c){}
//};
//
//void Triangle::getasum(){
//    res = geta() + getb() + getc();
//    r(res);
//}
//void Triangle::getTrin(){
//    int array[3] = {
//        geta(),
//        getb(),
//        getc()
//    };
//        for(int i = 0; i<3; i++){
//            int j =  i + 1;
//            int h =  i - 1;
//            if(i == 0){
//                h = 2;
//            }
//            if(i == 2){
//                j = 0;
//            }
//            res = ((array[i] * array[i]) + (array[h] * array[h]) - (array[j] * array[j])) / (2 * array[i] * array[h]);
//            cout<<i<<"res:"<<res<<endl;
//            // if a and b and c = 2, res = 0.5 but because res = int res = 0, true res = 0.5
//    }
//}
//void Triangle::square(){
//    res = (geta() * getb()) / 2;
//    r(res);
//}
//int main(){
//    Triangle tr;
//    tr.getTrin();
//}
