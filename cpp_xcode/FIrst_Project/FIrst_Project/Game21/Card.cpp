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
//ostream & operator<<(ostream & os,const Card & aCard){
//    const string ranks[]  {"0","A", "2","3","4","5","6","7","8","9","10","J","Q", "K"};
//    const string suits[] {"C", "D", "H", "S"};
//    if(aCard.m_isFaceUp == true){//если тру - выводим иначе XX
//        os<<"Rank: "<<ranks[aCard.m_Rank]<<endl;
//        os<<"Suit: "<<suits[aCard.m_Suite]<<endl;
//    }else{
//        os<<"Rank: X"<<endl;
//        os<<"Suit: X"<<endl;
//    }
//    return os;
//}
//
//
//
