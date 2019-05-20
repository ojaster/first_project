//
//  Cow.cpp
//  FIrst_Project
//
//  Created by Данил on 06/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
class Cow{
private:
    
public:
    char name[20];
    char * hobby;
    double weight;
    Cow();
    Cow(const char * nm, const  char * ho, double wt);
    Cow(const Cow & c);
    ~Cow();
    Cow & operator=(Cow & c){
        for(int i=0; i<20; i++){
            this->name[i] = c.name[i];
        }
        this->hobby = c.hobby;
        this->weight = c.weight;
        return c;
    }
    
    void ShowCow()const;
};
Cow::Cow(){
    cout<<"constructor"<<endl;
    hobby = NULL;
    name[0] = '\0';
    weight = 0;
}
Cow::Cow(const char * nm, const char * ho, double wt){
    int i;
    for(i = 0; i < strlen(nm); i++){
        name[i] = nm[i];
    }
    name[i] = '\0';
    
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby,ho);
    weight = wt;
}

Cow::Cow(const Cow & c){
    strcpy(name,c.name);
    /* if(hobby != NULL){  !!!!!!!!!!
        delete hobby;
    }*/
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow() {
    delete hobby;
}

void Cow::ShowCow() const {
    for(int i = 0; i < strlen(name); i++){
            cout<<name[i]<<endl;
    }
    for(int i=0; i<strlen(hobby); i++){
        cout<<hobby[i]<<endl;
    }
    cout<<weight<<endl;
}



//int main(){
//    cout<<"work2"<<endl;
//    Cow cow1("cow","jumping",20);
//    Cow cow2 = cow1;
//    cow1.ShowCow();
//    cout<<"cow2:"<<endl;
//    cow2.ShowCow();
//    //создать cow3
//    //cow1 = cow3
//}
