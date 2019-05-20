//
//  baseDMA.cpp
//  FIrst_Project
//
//  Created by Данил on 12/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
class BaseDMA{
private:
    char * label;
    int rating;
public:
    BaseDMA(const char * l = "NULL", int r = 0);
    // конструктор копирования
    BaseDMA(const BaseDMA & baseDMA);
    virtual ~ BaseDMA();
    BaseDMA & operator=(const BaseDMA & rs);
    friend ostream & operator<<(ostream & os,const BaseDMA & bD);
};
ostream & operator<<(ostream & os,const BaseDMA & bD);
ostream & operator<<(ostream & os,const BaseDMA & bD){
    os<<bD.label<<endl;
    os<<bD.rating<<endl;
    return os;
}

BaseDMA & BaseDMA::operator=(const BaseDMA & rs){
    if(this == &rs){
        return *this;
    }
    delete []label;
    label = new char[strlen(rs.label)+1];
    strcpy(label,rs.label);
    rating = rs.rating;
    return * this;
}
BaseDMA:: ~ BaseDMA(){
    delete [] label;
}
BaseDMA::BaseDMA(const BaseDMA & baseDMA){
    label = new char[strlen(baseDMA.label)];
    strcpy(label,baseDMA.label);
    rating = baseDMA.rating;
}
//производный класс, не использующий динамическое выделение памяти
class LacksDMA:public BaseDMA{
private:
    char color[40];
public:
    //конструктор копирования по умолчанию выполняет почленное копирование, что неприемлемо
    //для динамического выделения памяти
};

class HasDMA:public BaseDMA{
private:
    char * style;
public:
    HasDMA(const HasDMA & HasDMA);
    virtual ~ HasDMA();
    HasDMA & operator=(HasDMA & rs);
};
HasDMA::HasDMA(const HasDMA & hasDMA) : BaseDMA(hasDMA){
    style = new char[strlen(hasDMA.style) + 1];
    strcpy(style,hasDMA.style);
}
HasDMA::~HasDMA(){
    delete [] style;
}
HasDMA & HasDMA::operator=(HasDMA & hs){
    if(this == &hs){
        return *this;
    }
    BaseDMA::operator=(hs);//копирование базовой части
    //*this = hs;
    
    delete [] style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style,hs.style);
    return *this;
    
}


//int main(){
//    //A a;
//    //cout<<a;
//    //[s][t][4][5][g][\n][]
//}
