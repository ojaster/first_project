//
//  Customer.hpp
//  FIrst_Project
//
//  Created by Данил on 03/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Customer{
private:
    long arrive;
    int processTime;
public:
    Customer();
    void set(long when);
    long when() const;
    int prime();
    
};

#endif /* Customer_hpp */
