//
//  everything.cpp
//  FIrst_Project
//
//  Created by Данил on 26/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Car{
protected:
    string mark;
    int zil;
    double horsePower;
public:
    Car(string marka, int zilindr, double horsePow){
        mark = marka;
        zil = zilindr;
        horsePower = horsePow;
    }
    void changePower(double newHorsePower){
        newHorsePower = horsePower;
    }
};
class Lorry:public Car{
private:
    double maxWeight;
    int zil;
public:
    Lorry(double maxWeightt, int zilindr):Car(mark,zilindr,maxWeightt){}
    void change(double maxWeightt, int zill){
        zil = zill;
        maxWeight = maxWeightt;
    }
};

class Pair{
protected:
    int a;
    int b;
public:
    Pair(int A, int B){//int * arr
        a = A;
        b = B;
    }
    
    int minus(Pair & p){
        int value;
        value = a - p.a;
        b = b - p.b;
        return value,b;
    }
    int geta(){
        return a;
    }
    int getb(){
        return b;
    }
   
};
class Rational:public Pair{
public:
    Pair plus(Pair & p){
        int value;
        a = a * p.geta();
        b = b * p.geta();
        value = a + b;
        b = b * p.getb();
        return Pair(value,b);
    }
    Pair division(Pair & p){
        int value;
        value = a * p.getb();
        b = b * p.geta();
        
        return Pair(value,b);
    }
    Pair mInus(Pair & p){
        int value;
        value = a * p.getb();
        b = b * p.geta();
        a = value - b;
        b = b * p.getb();
        return Pair(a,b);
    }
};

class Currency{
public:
    virtual void outPut() = 0;
    double perevod(double cours,double moneyCount){
        return cours * moneyCount;
    }
};
class Dollar:public Currency{
private:
    double cours = 66;
    double moneyCount = 2;
public:
    virtual void outPut(){
        cout<<perevod(cours, moneyCount)<<endl;
    }
};

class Euro:public Currency{
private:
    double cours = 75;
    double moneyCount = 5;
public:
    virtual void outPut(){
        cout<<perevod(cours, moneyCount)<<endl;
    }
};
class Array{
protected:
    int array[5]{
        6,
        4,
        1,
        8,
        10
    };
public:
    virtual void foreach() = 0;
    
};

class SortArray: public Array{
public:
    virtual void foreach(){
        int num = 0;
        for(int i=0; i<5; i++){
            num += array[i];
        }
        for(int i=0; i<5 - 1; i++){
            for(int j = 0; j< 5 - i - 1; j++){
                if(array[j] > array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
        for(int i=0; i<5; i++){
            cout<<array[i]<<endl;
        }
        cout<<num<<endl;
    }
};

class XorArray:public Array{
public:
    virtual void foreach(){
        int arrray[5];
        int num = 0;
        for(int i=0; i<5; i++){
            num-=array[i];
        }
        for(int i=0; i<5; i++){
            arrray[i] = array[i] * array[i];
            }
        for(int i=0; i<5; i++){
            cout<<arrray[i]<<endl;
        }
        cout<<num<<endl;
    }
};
//int main(){
//    int array[2]{
//        2,
//        3
//    };
//    Pair p(array);
//    p.minus();
//}
