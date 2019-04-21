//
//  Header.h
//  FIrst_Project
//
//  Created by Данил on 14/04/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Header_h
#define Header_h


#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
class Card{
    
public:
    enum rank{ACE = 1, TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUIN,KING};
    enum suit{CLUBS,DIAMOND,HEARTHS,SPADES};
    friend ostream & operator<<(ostream & os,const Card & aCard);
    Card(rank r = ACE, suit s = SPADES, bool ifu = true);
    
    //возвращает значение карты от 1 до 11
    int getValue() const;
    // переворачивает карту
    void flip();
private:
    rank m_Rank;
    suit m_Suite;
    bool m_isFaceUp;//если тру - выводим иначе XX
};
#endif /* Header_h */

