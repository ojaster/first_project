//
//  Hand.cpp
//  FIrst_Project
//
//  Created by Данил on 13/04/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//
#include "Card.h"
#include "Hand.h"

Hand::Hand(){
    m_Cards.reserve(7);
}
Hand::~Hand() {
    clear();
}

void Hand::add(Card * pCard){
    m_Cards.push_back(pCard);
}

int Hand::getTotal()const{
   
    if(m_Cards.empty()){
        return 0;
    }
    //если первая карта имеет значение 0, то она лежит рубашкой вверх
    //вернуть значение 0
    if(m_Cards[0]->getValue()==0){
        return 0;
    }
    //находит сумму очков всех карт, каждый туз дает 1 очко
    int total = 0;
    vector<Card*>::const_iterator iter;
    for(iter = m_Cards.begin(); iter!=m_Cards.end(); iter++){
        total+=(*iter)->getValue();
    }
    //опредляет держит ли туз
    bool containsAce = false;
    for(iter = m_Cards.begin(); iter!=m_Cards.end(); iter++){
        if((*iter)->getValue() == Card::ACE){
            containsAce = true;
        }
    }
    //если рука держит туз и сумма довольно мленькая туз дает 11 очков
    if(containsAce == true && total <= 11){
        //добавлям только 10 очков так как уже добавили за каждый туз по одному очку
        total += 10;
    }
    return total;
}
void Hand::clear(){
    //удалит все указатели из вектора с картами, но и удалит еще все связанные объекты типа card (освободит память)
  
        //проходит по вектору освобождаю всю память в куче
    vector<Card*>::iterator iter;
    for(iter = m_Cards.begin(); iter!=m_Cards.end(); iter++){
        delete (*iter);
        *iter = 0;
    }
    //очищаем вектор указателей
    m_Cards.clear();
}
