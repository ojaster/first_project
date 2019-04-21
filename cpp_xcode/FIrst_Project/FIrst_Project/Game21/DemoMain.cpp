//
//  DemoMain.cpp
//  FIrst_Project
//
//  Created by Данил on 21/04/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include "Game.hpp"
#include "GenericPLayer.h"
#include <iostream>
using namespace std;

ostream & operator<<(ostream & os, const GenericPlayer & aGenericPlayer);
ostream & operator<<(ostream & os,const Card & aCard);

int main(){
    cout<<"Welcome to the game Black Jack"<<endl;
    int numPlayers = 0;
    while(numPlayers<1 || numPlayers>7){
        cout<<"How many players? (1-7)"<<endl;
        cout<<":";
        cin>>numPlayers;
    }
    vector<string> names;
    string name;
    for(int i=0; i<numPlayers; i++){
        cout<<"enter player name:";
        cin>>name;
        names.push_back(name);
    }
    cout<<endl;
    Game aGame(names);
    char again = 'y';
    while(again!='n' && again!='N'){
        aGame.play();
        cout<<"do you want to play again?(y/n)"<<endl;
        cout<<":";
        cin>>again;
    }
}
