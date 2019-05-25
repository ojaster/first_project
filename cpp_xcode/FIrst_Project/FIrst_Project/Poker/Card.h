//
//  Card.h
//  FIrst_Project
//
//  Created by Данил on 17/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Card_h
#define Card_h
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <ctime>
#include <vector>
using namespace std;
class Card{
protected:
    int i;
    
    string c[44]{
        "1.F",
        "1.5",
        "1.S",
        "1.7",
        "1.E",
        "1.N",
        "1.T",
        "1.J",
        "1.Q",
        "1.K",
        "1.A",

        "2.F",
        "2.5",
        "2.S",
        "2.7",
        "2.E",
        "2.N",
        "2.T",
        "2.J",
        "2.Q",
        "2.K",
        "2.A",

        "3.F",
        "3.5",
        "3.S",
        "3.7",
        "3.E",
        "3.N",
        "3.T",
        "3.J",
        "3.Q",
        "3.K",
        "3.A",

        "4.F",
        "4.5",
        "4.S",
        "4.7",
        "4.E",
        "4.N",
        "4.T",
        "4.J",
        "4.Q",
        "4.K",
        "4.A"
        };
    vector<string> card;
public:
    void cardsShuffle();
    vector<string> get();
    Card(){
        for(string s : c){
            card.push_back(s);
            cout<<*c<<endl;
        }
       
    }
    
};

#endif /* Card_h */
