//
//  Game_Lobby.cpp
//  FIrst_Project
//
//  Created by Данил on 17/03/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Player{
private:
    string m_name;
    Player * m_Pnext;//указатель на следующего игрока в списке
public:
    Player(const string & name = " ");
    string getName()const;
    Player * getNext()const;
    void setNext(Player * next);
};

Player::Player(const string & name):m_name(name), m_Pnext(0){}

string Player::getName() const{
    return m_name;
}
Player* Player::getNext()const{
    return m_Pnext;
}
void Player::setNext(Player * next){
    m_Pnext = next;
}

class Lobby{
private:
    Player * m_pHead;
public:
    Lobby();
    ~Lobby();
    void addPlayer();
    void removePlayer();
    void clear();
};
Lobby::Lobby():m_pHead(0){}
Lobby::~Lobby(){
    clear();
}
void Lobby::addPlayer(){
    cout<<"enter player name:";
    string name;
    cin>>name;
    Player * newPlayer = new Player(name);
    if(m_pHead == NULL){ // если список пуст поставить в начало нового игрока
        m_pHead = newPlayer;
    }else{ //в противном случае найти конец списка и добавить туда игрока
        
    }
}
int main(){
    
}
