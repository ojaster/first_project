//
//  points.cpp
//  FIrst_Project
//
//  Created by Данил on 19/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include "points.hpp"
#include "Hand.h"
using namespace std;
class Points:public Hand{
private:
    int points = 0;
public:
    int bigSwitch();
    
};
int Points::bigSwitch(){

    return points;
}
//int main(){
//
//}
