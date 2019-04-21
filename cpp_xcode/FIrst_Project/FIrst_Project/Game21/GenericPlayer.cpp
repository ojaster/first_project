//
//  GenericPlayer.cpp
//  FIrst_Project
//
//  Created by Данил on 13/04/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include "Hand.h"
#include "GenericPLayer.h"
using namespace std;
GenericPlayer::GenericPlayer(const string & name):m_Name(name){}
GenericPlayer::~GenericPlayer(){}

bool GenericPlayer::isBusted() const{
    return (getTotal() > 21);
}
void GenericPlayer::bust() const{
    cout<<m_Name<<" BUST!"<<endl;
}
//функция отображает имя игрока и его карты, а также общую сумму очков его карт
ostream & operator<<(ostream & os, const GenericPlayer & aGenericPlayer){
    os<<"generic player:"<<endl;
    os<<aGenericPlayer.m_Name<<endl;
    vector<Card *>::const_iterator pCard;
    if(!aGenericPlayer.m_Cards.empty()){
        for(pCard = aGenericPlayer.m_Cards.begin(); pCard!=aGenericPlayer.m_Cards.end(); pCard++){
            os<<*(*pCard)<<"/t";
        }
        if(aGenericPlayer.getTotal() != 0){
            os<<"("<<aGenericPlayer.getTotal()<<")"<<endl;
        }else{
            os<<"(Empty)"<<endl;
        }
    }
    return os;
}


