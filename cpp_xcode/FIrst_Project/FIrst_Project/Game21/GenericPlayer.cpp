////
////  GenericPlayer.cpp
////  FIrst_Project
////
////  Created by Данил on 13/04/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include "Hand.h"
//using namespace std;
//class GenericPlayer : public Hand{
//protected:
//    string m_Name;
//public:
//    friend ostream & operator<<(ostream & os, const GenericPlayer & aGenericPlayer);
//    GenericPlayer(const string & name = "");
//    virtual ~GenericPlayer();
//    //показывает хочет ли игрок продолжать брать карты
//    virtual bool isHitting() const = 0;
//    //возвращает значение если игрок имеет пербор - сумма очков больше 21
//    bool isBusted() const;
//    //объявляет что игрок имеет перебор
//    void bust() const;
//
//};
//GenericPlayer::GenericPlayer(const string & name):m_Name(name){}
//GenericPlayer::~GenericPlayer(){}
//
//bool GenericPlayer::isBusted() const{
//    return (getTotal() > 21);
//}
//void GenericPlayer::bust() const{
//    cout<<m_Name<<" BUST!"<<endl;
//}
//
//
