//
//  points.cpp
//  FIrst_Project
//
//  Created by Данил on 19/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include "points.hpp"
int Points::bigSwitchForPlayer(vector<string> ff){
    for(int i=0; i<ff.size() - 1; i++){
        for(int j=i+1; j<ff.size() - 1; j++){
            if(ff[i] == ff[j]){
                points+=1;
            }
        }
    }
    return points;
}
