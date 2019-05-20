//
//  Cd.h
//  FIrst_Project
//
//  Created by Данил on 14/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Cd_h
#define Cd_h
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
class Cd{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    void Report()const;
    Cd & operator=(Cd & d);
};

#endif /* Cd_h */
