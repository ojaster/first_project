//
//  Deck.h
//  FIrst_Project
//
//  Created by Данил on 19/04/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Deck_h
#define Deck_h
#include <stdio.h>
#include <iostream>
#include "Deck.h"
#include "GenericPLayer.h"
#include <algorithm>
class Deck:public Hand{
public:
    Deck();
    
    virtual ~Deck();
    
    void populate();
    
    void shuffle();
    
    void deal(Hand & hand);
    
    void additionalCards(GenericPlayer & aGenericPlayer);
    
};

#endif /* Deck_h */
