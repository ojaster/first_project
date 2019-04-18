////
////  Card.cpp
////  FIrst_Project
////
////  Created by Данил on 13/04/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include "Card.h"
//
//Card::Card(rank r , suit s , bool ifu):m_Rank(r),m_Suite(s),m_isFaceUp(ifu){}
//int Card::getValue() const{
//    int value = 0;
//    if(m_isFaceUp){
//        //значение - это число указанное на карте
//        value = m_Rank;
//        //значение равно 10 для открытых карт
//        if(value>10){
//            value = 10;
//        }
//    }
//    return value;
//}
//void Card::flip(){
//    m_isFaceUp = !(m_isFaceUp);
//}
//int main(){
//    cout<<"ok"<<endl;
//}
