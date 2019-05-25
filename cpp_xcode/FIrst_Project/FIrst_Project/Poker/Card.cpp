//
//  Card.cpp
//  FIrst_Project
//
//  Created by Данил on 17/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include "Card.h"
void Card::cardsShuffle(){
    srand(time(NULL));
        for(int j=0; j<44; j++){
            card[j] = rand() % 44;
        }
}
vector<string> Card::get(){
    return card;
}

//int main(){
//    
//}
