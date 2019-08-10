//
//  power.cpp
//  FIrst_Project
//
//  Created by Данил on 09/08/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
static int res = 0;
int power(int elem, int times);
int main(){
    power(4, 5);
    cout<<res;
}
int power(int elem, int times){
    if(times == 1){
        return elem;
    }
   
    res = power(elem, times-1);
    return res *=elem;
}
