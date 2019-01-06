//
//  ship.cpp
//  FIrst_Project
//
//  Created by Данил on 19.11.18.
//  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include "ship.hpp"
//#include <iostream>
//using namespace std;
//
//class Angle{
//private:
//    int degree;
//    float minute;
//    string direction;
//public:
//    Angle(){
//        
//    }
//    Angle(int d, int m, string dir){
//        degree=d;
//        minute=m;
//        direction=dir;
//    }
//    void show(){
//        cout<<degree<<"°"<<minute<<"'"<<direction<<","<<endl;
//    }
//};
//
//class Ship1{
//        private:
//            Angle one; //latitude - ширина
//            Angle two; //longitude - долгота
//            static int totalAmount; // для всех объектов - общее поле ( то есть будет одинаковым для всех экземпляров данного класса)
//            int orderNumber;
//        public:
//        
//            Ship1(int n, Angle o, Angle t){
//                one = o;
//                two = t;
//                orderNumber = n;
//                totalAmount++;
//            }
//            int getOrderNumber(){
//                return orderNumber;
//            }
//            int getTotalAmount(){
//                return totalAmount;
//            }
//    
//    void showInformation(){
//        cout<<"Ширина"<<endl;
//        one.show();
//        cout<<"Долгота"<<endl;
//        two.show();
//        cout<<"Порядковый номер корабля"<<endl;
//        cout<<orderNumber<<endl;
//        
//    }
//        
//        
//};
//int Ship1::totalAmount = 0;
//
//int main(){
//    Angle one(30, 10, "s");
//    Angle two(40, 8, "w");
//    Ship1 ship(0, one, two);
//    
//    ship.showInformation();
//    
//    Angle one1(30, 10, "s");
//    Angle two1(40, 8, "w");
//    Ship1 ship1(ship.getTotalAmount(), one1, two1);
//    
//    ship1.showInformation();
//}
