//
//  port.cpp
//  FIrst_Project
//
//  Created by Данил on 01/06/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
class Port{
private:
    char * brand;
    char style[20];
    
    int bottles;
public:
    Port(const char * br, int b):bottles(b){brand = new char[strlen(br)+1]; strcpy(brand, br);}
    Port(const char * br = "none", const char * st = "none", int b = 0):bottles(b){brand = new char[strlen(br)+1];strcpy(style,st);}
    Port(const Port & p):bottles(p.bottles){brand = new char[strlen(p.brand)+1];strcpy(style,p.style);}
    virtual ~Port(){delete [] brand;}
    Port & operator=(const Port & p){brand = new char[strlen(p.brand)+1]; strcpy(style,p.style);strcpy(brand,p.brand);bottles = p.bottles;return *this;}
    Port & operator+=(int b){bottles = bottles + b; return *this;}
    Port & operator-=(int b){bottles = bottles - b; return *this;}
    int BottleCout()const{return bottles;}
    virtual void Show() const{cout<<"Brand:"<<*brand<<endl; for(int i = 0; i<strlen(style); i++){cout<<"Style:"<<style[i]<<endl;} cout<<"Count:"<<bottles<<endl;}
    friend ostream & operator<<(ostream & os, Port & port){os<<*(port.brand)<<","; for(int i = 0; i<strlen(port.style); i++){os<<port.style[i]<<","; }os<<port.bottles<<endl; return os; }
};

class VintagePort:public Port{
private:
    char * nickname;
    int year;
public:
    VintagePort():nickname(NULL), year(0){}
    VintagePort(const char * br, int b, const char * nn, int y);
    VintagePort(const VintagePort & vp);
    ~VintagePort(){delete [] nickname; }
    VintagePort & operator=(const VintagePort & vp);
    void show()const;
    friend ostream & operator<<(ostream * os, const VintagePort & vp);
};
VintagePort::VintagePort(const char * br, int b, const char * nn, int y):Port(br,b){
    nickname = new char[strlen(nn)+1];
    strcpy(nickname, nn);
    year = y;
    
}
VintagePort::VintagePort(const VintagePort & vp){
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}
VintagePort & VintagePort:: operator=(const VintagePort & vp){
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}
void VintagePort::show()const{
    cout<<"nickname:"<<*nickname<<endl;
    cout<<"year:"<<year<<endl;
}
ostream & operator<<(ostream * os, const VintagePort & vp);
ostream & operator<<(ostream * os, const VintagePort & vp){
    *os<<vp.nickname<<","<<vp.year<<endl;
    return *os;
}


//int main(){
//   
//}
