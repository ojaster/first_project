//
//  employee2.hpp
//  FIrst_Project
//
//  Created by Данил on 24.11.18.
//  Copyright © 2018 Daniil. All rights reserved.
//

#ifndef employee2_hpp
#define employee2_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Employee{
private:
    long number;
    string name;
public:
    void getData(){
        cout<<"input number:";
        cin>>number;
        cout<<"input name:";
        cin>>name;
    }
    void putData(){
        cout<<"employee:"<<name<<endl;
        cout<<"number:"<<number<<endl;
    }
};






#endif /* employee2_hpp */

