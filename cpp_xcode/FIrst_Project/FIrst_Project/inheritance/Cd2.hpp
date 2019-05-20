//
//  Cd2.hpp
//  FIrst_Project
//
//  Created by Данил on 15/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Cd2_hpp
#define Cd2_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
class Cd2{
private:
    char * performers;
    char * label;
    int selections;
    double playtime;
public:
    Cd2(char * s1, char * s2, int n, double x);//1
    Cd2(const Cd2 & d);//1
    Cd2();
    virtual ~Cd2();
    void Report()const;
    Cd2 & operator=(Cd2 & d);
};

#endif /* Cd2_hpp */
