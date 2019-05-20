////
////  Game.cpp
////  FIrst_Project
////
////  Created by Данил on 21/04/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//#include "Game.hpp"
//
//
//Game::Game(vector<string> & names){
//    //создаем вектор игроков из вектора с именами
//    vector<string>::const_iterator pName;
//    for(pName = names.begin(); pName!= names.end(); pName++){
//        m_Players.push_back(Player(*pName));
//    }
//    srand(time(NULL));//засеваем генератор случайных чисел
//    m_Deck.populate();//создаем колоду карт
//    m_Deck.shuffle();//тасуем колоду карт
//}
//Game::~Game(){}
//
//void Game::play(){
//    //раздает каждому по две стартовые карты
//    vector<Player>::iterator pPlayer;
//    for(int i=0; i<2; i++){
//        for(pPlayer = m_Players.begin(); pPlayer!= m_Players.end(); pPlayer++){
//            m_Deck.deal(*pPlayer);
//        }
//        m_Deck.deal(m_house);
//    }
//    
//    //прячет первую карту диллера
//    m_house.flipFirstCard();
//    //открыть руки всех игроков
//     for(pPlayer = m_Players.begin(); pPlayer!= m_Players.end(); pPlayer++){
//         cout<<*pPlayer<<endl;
//     }
//    cout<<m_house<<endl;
//    //раздаем игрокам дополнительные карты
//    for(pPlayer = m_Players.begin(); pPlayer!= m_Players.end(); pPlayer++){
//        m_Deck.additionalCards(*pPlayer);
//    }
//    //показываем первую карту диллера
//    m_house.flipFirstCard();
//    cout<<endl;
//    cout<<m_house<<endl;
//    //раздаем диллеру дополнетельные карты
//    m_Deck.additionalCards(m_house);
//    if(m_house.isBusted()){
//        //все кто остался в игре - побеждают
//        for(pPlayer = m_Players.begin(); pPlayer!= m_Players.end(); pPlayer++){
//            if(!(pPlayer->isBusted())){
//                pPlayer->win();
//            }
//        }
//    }else{
//        //сравниваем суммы очков всех оставшихся игроков с суммой очков диллера
//        for(pPlayer = m_Players.begin(); pPlayer!= m_Players.end(); pPlayer++){
//            if(!(pPlayer->isBusted())){
//                if(pPlayer->getTotal()>m_house.getTotal()){
//                    pPlayer->win();
//                }else if(pPlayer->getTotal()<m_house.getTotal()){
//                    pPlayer->lose();
//                }else{
//                    pPlayer->draw();
//                }
//            }
//        }
//    }
//    //очищает руки всех игроков
//    for(pPlayer = m_Players.begin(); pPlayer!= m_Players.end(); pPlayer++){
//            pPlayer->clear();
//    }
//    m_house.clear();
//}
