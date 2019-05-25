//
//  Cd2.cpp
//  FIrst_Project
//
//  Created by Данил on 15/05/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include "Cd2.hpp"
#include <string.h>
void Bravo(const Cd2 & disk);
//Cd::~Cd(){
//    delete this;
//}
class Classic:public Cd2{
private:
    char * performers;
    char * label;
    int selections;
    double playtime;
    char * something;
public:
    Classic(char * s1, char * s2, int n, double x, char * s);//1
    Classic(const Classic & d);//1
    Classic();//1
    virtual ~Classic();//1
    void Report()const;//1
    Classic & operator=(Classic & d);//1
    
};
Classic::Classic(char * s1, char * s2, int n, double x, char * s):Cd2(s1,s2,n,x){
    something = new char[strlen(s)+1];
    something = s;
}

Classic::Classic(const Classic & d){
    performers = new char[strlen(d.performers)+1];
    label = new char[strlen(d.label)+1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Classic::Classic(){
    something = NULL;
    performers = NULL;
    label = NULL;
    selections = 0;
    playtime = 0;
}
Classic::~Classic(){
    delete label;
    delete performers;
    delete something;
}
void Classic::Report()const{
    for(int i=0; i<strlen(performers); i++){
        cout<<performers[i]<<endl;
    }
    for(int i=0; i<strlen(label); i++){
        cout<<label[i]<<endl;
    }
    cout<<selections<<endl;
    cout<<playtime<<endl;
}

Classic & Classic::operator=(Classic & d){
    if(performers != NULL){
        delete performers;
    }
    if(something != NULL){
        delete performers;
    }
    if(label != NULL){
        delete performers;
    }
    performers = new char[strlen(d.performers)];
    strcpy(performers, d.performers);
    something = new char[strlen(d.something)];
    strcpy(something, d.something);
    label = new char[strlen(d.label)];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return d;
}

//cd class
void Cd2::Report()const{
    for(int i=0; i<strlen(performers); i++){
        cout<<performers[i]<<endl;
    }
    
    for(int i=0; i<strlen(label); i++){
        cout<<label[i]<<endl;
    }
    cout<<selections<<endl;
    cout<<playtime<<endl;
}

Cd2::Cd2(){
    performers = NULL;
    label = NULL;
    selections = 0;
    playtime = 0;
}

Cd2::~Cd2(){
    delete performers;
    delete label;
}

Cd2::Cd2(const Cd2 & d){
    performers = new char[strlen(d.performers)+1];
    label = new char[strlen(d.label)+1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd2::Cd2(char * s1, char * s2, int n, double x){
    performers = new char[strlen(s1)+1];
    label = new char[strlen(s2)+1];
    for(int i=0; i<strlen(s1); i++){
        performers[i] = s1[i];
    }
    for(int i=0; i<strlen(s2); i++){
        label[i] = s2[i];
    }
    selections = n;
    playtime = x;
}

Cd2 & Cd2::operator=(Cd2 & d){
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return d;
}


int main(){
    Cd2 c1("Beatles" ,"Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel",2,57.17,"Philips");;
    Cd2 *pcd = &c1;
    cout<<"Using object directly:\n";
    c1.Report();
    c2.Report();
    cout<<"Using type cd * pointer to objects:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();
    cout<<"Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);
    cout<<"Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();
    return 0;
   
}
void Bravo(const Cd2 & disk){
    disk.Report();
}
