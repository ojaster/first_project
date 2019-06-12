//
//  Header.h
//  FIrst_Project
//
//  Created by Данил on 18/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <stdio.h>
#include <string>
#include <iostream>
#include <time.h>
#include "Card.h"
using namespace std;
class Hand:public Card{
protected:
    int currentIndex = 0;
    int const fullhand = 5;
    vector<string> dealerHand;
    vector<string> hand;
public:
    Hand();
    void handFull();
    void dealerHandFull();
    void showHand()const;
    vector<string> gethand();
    
};
#endif /* Header_h */
