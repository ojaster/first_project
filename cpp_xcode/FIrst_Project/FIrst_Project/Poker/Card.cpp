//
//  Card.cpp
//  FIrst_Project
//
//  Created by Данил on 13/06/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include "Card.h"
void Card::cardsShuffle(){
    int g;
    srand(time(NULL));
    for(int j=0; j<44; j++){
        g = rand() % 44;
        card[j] = card[g];
    }
}
vector<string> Card::get(){
    return card;
}
