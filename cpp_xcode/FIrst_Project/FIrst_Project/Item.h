//
//  Item.h
//  FIrst_Project
//
//  Created by Данил on 01/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Item_h
#define Item_h
#include <iostream>
#include <string>
using namespace std;
class Item{
private:
    string name;
public:
    string getName();
    string setName(string n);
    Item(string n);
    Item();
};

#endif /* Item_h */
