////
////  Deck.cpp
////  FIrst_Project
////
////  Created by Данил on 19/04/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include "Deck.h"
//Deck::~Deck(){}
//Deck::Deck(){
//    m_Cards.reserve(52);
//    populate();
//}
//void Deck::populate(){
//    clear();
//    //создает стандартную кололоду
//    for(int s = Card::CLUBS; s<=Card::SPADES; ++s){
//        for(int r = Card::ACE; r<=Card::KING; r++){
//            
//            Card * pCard = new Card((Card::rank) r, (Card::suit) s); //func((int)5.8);   void func (int a);
//            add(pCard);
//        }
//    }
//    shuffle();
//}
//void Deck::shuffle(){
//    random_shuffle(m_Cards.begin(), m_Cards.end());
//}
//
//void Deck::deal(Hand & hand){
//    if(!m_Cards.empty()){
//        hand.add(m_Cards.back());//достаем из вектора последнюю карту и помещаем ее в руку
//        m_Cards.pop_back();//удаляем карту из колоды
//    }else{
//        cout<<"unable to deal"<<endl;
//    }
//    
//}
////Продолжает раздавать карты до тех пор, пока у игрока не случается перебор
////или пока он не хочет взять еще одну карту
//void Deck::additionalCards(GenericPlayer & aGenericPlayer){
//    while(!aGenericPlayer.isBusted() && aGenericPlayer.isHitting()){
//        deal(aGenericPlayer);
//        if(aGenericPlayer.isBusted()){
//            aGenericPlayer.bust();
//        }
//    }
//    //while ! isBusted && isitting
//    //deal (aGenericPlayer)
//    //if isBusted
//    // aGenericPlayer.bust()
//}
//   
