//
//  points.hpp
//  FIrst_Project
//
//  Created by Данил on 19/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef points_hpp
#define points_hpp
#include <stdio.h>
#include "Hand.h"
using namespace std;
class Points:public Hand{
private:
    int points = 0;
    int pointsAi = 0;
public:
    int bigSwitchForPlayer(vector<string> ff);
    
};
#endif /* points_hpp */
