//
//  Hand.cpp
//  FIrst_Project
//
//  Created by Данил on 17/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//
#include "Hand.h"
void Hand::dealerHandFull(){
    int k = currentIndex;
    vector<string> c;
    c = get();
    vector<string>::iterator ite;
    for(; i<k+fullhand; i++){
        dealerHand.push_back(*ite);
    }
}
void Hand::handFull(){
    int k = currentIndex;
    vector<string> c;
    c = get();
    vector<string>::iterator ite;
    ite=c.begin()+k;
    for(; i<k+fullhand; i++, ite++){
        hand.push_back(*ite);
    }
}
void Hand::showHand()const{
    cout<<"dealer hand:";
    for(int i=0; i<dealerHand.size(); i++){
        cout<<dealerHand[i]<<endl;
    }
    cout<<"player hand:";
    for(int i=0; i<hand.size(); i++){
        cout<<hand[i]<<endl;
    }
}
Hand::Hand(){
    cardsShuffle();
}
//int main(){
//
//}

