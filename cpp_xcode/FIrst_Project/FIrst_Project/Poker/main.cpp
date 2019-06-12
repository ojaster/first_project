////
////  main.cpp
////  FIrst_Project
////
////  Created by Данил on 18/05/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
#include <stdio.h>
#include <iostream>
#include "Hand.h"
#include "points.hpp"
using namespace std;
int main(){
    Hand game1;
    game1.cardsShuffle();
    game1.handFull();
    game1.dealerHandFull();
    game1.showHand();
    Points p;
    cout<<p.bigSwitchForPlayer()<<endl;

}
