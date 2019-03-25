////
////  Game_Lobby.cpp
////  FIrst_Project
////
////  Created by Данил on 17/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Player{
//private:
//    string m_name;
//    Player * m_Pnext;//указатель на следующего игрока в списке
//public:
//    Player(const string & name = " ");
//    string getName()const;
//    Player * getNext()const;
//    void setNext(Player * next);
//    
//};
//
//class Lobby{
//private:
//    Player * m_pHead;
//public:
//    Lobby();
//    ~Lobby();
//    void addPlayer();
//    void removePlayer();
//    void clear();
//    friend ostream & operator <<(ostream & os , const Lobby & alobby);
//};
//Player::Player(const string & name):m_name(name), m_Pnext(0){}
//
//string Player::getName() const{
//    return m_name;
//}
//Player* Player::getNext()const{
//    return m_Pnext;
//}
//void Player::setNext(Player * next){
//    m_Pnext = next;
//}
//ostream & operator <<(ostream & os , const Lobby & alobby);
//
//ostream & operator <<(ostream & os , const Lobby & alobby){
//    Player * pIter = alobby.m_pHead;
//    cout<<"game lobby"<<endl;
//    if(pIter == NULL){
//        cout<<"Lobby is empty"<<endl;
//    }else{
//        while(pIter != NULL){
//            os<<pIter->getName()<<endl;
//            pIter = (*pIter).getNext();
//        }
//    }
//    return os;
//}
//
//Lobby::Lobby():m_pHead(0){}
//Lobby::~Lobby(){
//    clear();
//}
//void Lobby::addPlayer(){
//    cout<<"enter player name:";
//    string name;
//    cin>>name;
//    Player * newPlayer = new Player(name);
//    if(m_pHead == NULL){ // если список пуст поставить в начало нового игрока
//        m_pHead = newPlayer;
//    }else{ //в противном случае найти конец списка и добавить туда игрока
//        Player * pIter = m_pHead;
//        while (pIter-> getNext() != 0) {
//            pIter = pIter -> getNext();
//        }
//        pIter->setNext(newPlayer);
//    }
//}
//
//void Lobby::removePlayer(){
//    if(m_pHead == NULL){
//        cout<<" lobby is empty"<<endl;
//    }else{
//        Player * pTemp = m_pHead;
//        m_pHead = m_pHead -> getNext();
//        delete pTemp;
//    }
//}
//
//void Lobby::clear(){
//    while(m_pHead!=NULL){
//        removePlayer();
//    }
//}
//
//int main(){
//    Lobby myLobby;
//    int choice;
//    do{
//        cout<<myLobby<<endl;
//        cout<<"0 = exit"<<endl;
//        cout<<"1 = add player"<<endl;
//        cout<<"2 = remove player"<<endl;
//        cout<<"3 = clear"<<endl;
//        cout<<"enter choice:";
//        cin>>choice;
//        switch (choice) {
//            case 0:
//                cout<<"good bye"<<endl;
//                break;
//            case 1:
//                myLobby.addPlayer();
//                break;
//            case 2:
//                myLobby.removePlayer();
//                break;
//            case 3:
//                myLobby.clear();
//                break;
//                
//            default:
//                cout<<"it's unveiable choice "<<endl;
//                break;
//        }
//    }while(choice != 0);
//}
