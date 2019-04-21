//
//  Game.hpp
//  FIrst_Project
//
//  Created by Данил on 21/04/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Game.hpp"
#include "Deck.h"
#include "House.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;
class Game{
private:
    Deck m_Deck;//  Колода карт
    House m_house; //Рука дилелра //Группа игроков-людей, вектор, содержащий объекта типа Player
    vector<Player> m_Players;
public:
    //конструктор принимает ссылку на вектор строк - игроки-люди
    //создаем для каждого игрока объект класса Player
    Game(vector<string> & names);
    
    ~Game();
    
    
    
    void play();// Проводит кон игры в 21
    
};

#endif /* Game_hpp */
