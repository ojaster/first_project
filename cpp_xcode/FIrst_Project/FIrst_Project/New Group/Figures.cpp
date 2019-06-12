//
//  Figures.cpp
//  FIrst_Project
//
//  Created by Данил on 27/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
class Figure{
private:
    double a;
    double b;
    double r;
public:
    double geta();
    double getb();
    void rrr(double & rr);
    void virtual square() = 0;
    void virtual perimitor() = 0;
};
void Figure::rrr(double & rr){
    r = rr;
}
double Figure::geta(){
    return a;
}
double Figure::getb(){
    return b;
}

class Rectangel:public Figure{
private:
    double res;
public:
    void virtual square();
    void virtual perimitor();
};
void Rectangel::square(){
    res = geta() * getb();
    rrr(res);
}
void Rectangel::perimitor(){
    res = (2 * geta()) + (2 * getb());
    rrr(res);
}

class Circle:public Figure{
private:
    double res;
public:
    void virtual square();
    void virtual perimitor();
};
void Circle::square(){
    res = 3.1415 * (geta() * geta());
    rrr(res);
}
void Circle::perimitor(){
    res = 2 * 3.1415 * geta();
    rrr(res);
}
class Trapezium:public Figure{
private:
    double res;
    int h;
    int c;
    int d;
public:
    Trapezium(int j,int y, int u):h(j), c(y), d(u){}
    void virtual square();
    void virtual perimitor();
};
void Trapezium::square(){
    res = (geta() + getb()) * h / 2;
    rrr(res);
}
void Trapezium::perimitor(){
    res = geta() + getb() + c + d;
    rrr(res);
}

