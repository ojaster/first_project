//
//  House.hpp
//  FIrst_Project
//
//  Created by Данил on 19/04/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef House_hpp
#define House_hpp

#include <stdio.h>
#include "House.hpp"
#include <iostream>
#include "GenericPLayer.h"
#include "Card.h"
using namespace std;
class House:public GenericPlayer{
public:
    virtual bool isHitting() const;
    void flipFirstCard();
    House(const string & HouseName = "House");
    virtual ~House();
};

#endif /* House_hpp */
