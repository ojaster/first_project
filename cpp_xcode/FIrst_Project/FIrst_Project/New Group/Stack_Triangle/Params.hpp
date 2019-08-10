//
//  Params.hpp
//  FIrst_Project
//
//  Created by Данил on 04/08/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Params_hpp
#define Params_hpp
#include <iostream>
using namespace std;
class Params{
public:
    int n;//аргумент метода n
    int returnAddress;//адрес возвата
    Params(int n1,int addres):n(n1),returnAddress(addres){}
    Params(){}
//    void operator =(Params param){
//        this->n = param.n;
//        this->returnAddress = param.returnAddress;
//    }
    Params operator [](int index){
        return this[index];
    }
};

#endif /* Params_hpp */
