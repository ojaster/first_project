//
//  points.cpp
//  FIrst_Project
//
//  Created by Данил on 19/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include "points.hpp"
int Points::bigSwitchForPlayer(){
    int j;
    vector<string> ff = gethand();

    for(int i=0; i<ff.size() - 1; i++){
        
        if(ff[i] == ff[i+1]){
            points+=1;
        }
    }
    return points;
}
