//
//  Hand.cpp
//  FIrst_Project
//
//  Created by Данил on 17/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//
#include "Hand.h"
void Hand::dealerHandFull(){
    vector<string> c;
    c = get();
    vector<string>::iterator ite;
    ite=c.begin()+currentIndex;
    for(int k = currentIndex; currentIndex<k+fullhand; currentIndex++, ite++){
        dealerHand.push_back(*ite);
        
    }
    cout<<currentIndex<<endl;
}

void Hand::handFull(){
    vector<string> c;
    c = get();
    vector<string>::iterator ite;
    ite=c.begin()+currentIndex;
    for(int k = currentIndex; currentIndex<k+fullhand; currentIndex++, ite++){
        hand.push_back(*ite);
       
    }
    cout<<currentIndex<<endl;
}
void Hand::showHand()const{
    cout<<"dealer hand:"<<endl;
    for(int i=0; i<dealerHand.size(); i++){
        cout<<dealerHand[i]<<endl;
    }
    cout<<"player hand:"<<endl;
    for(int i=0; i<hand.size(); i++){
        cout<<hand[i]<<endl;
    }
}
Hand::Hand(){
    cardsShuffle();
}
vector<string> Hand::gethand(){return hand;}
//int main(){
//
//}

