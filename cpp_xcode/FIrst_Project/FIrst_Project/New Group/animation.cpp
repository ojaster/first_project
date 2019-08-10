////
////  animation.cpp
////  FIrst_Project
////
////  Created by Данил on 27/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//#define vecToGEtHer(x) vec##x
//class vector2D{
//    int x;
//    int y;
//public:
//    vector2D():x(NULL),y(NULL){}
//    void jump(){x--;}
//    void comeDown(){x++;}
//    void inPutXY(int a,int b){
//        x = a;
//        y = b;
//    }
//    int getX(){
//        return x;
//    }
//    int getY(){
//        return y;
//    }
//};
//
//class mapGHero{
//    vector2D massive[4];
//    int map[10][10];
//    int n;
//public:
//    mapGHero(int a,vector2D array[4]):n(a){
//        for(int i=0; i<10; i++){
//            for(int j=0; j<10; j++){
//                map[i][j] = n;
//            }
//        }
//        for(int i=0; i<10; i++){
//            map[0][i] = 2;
//        }
//        for(int i=0; i<10; i++){
//            map[i][0] = 2;
//        }
//        for(int i=0; i<10; i++){
//            map[9][i] = 2;
//        }
//        for(int i=0; i<10; i++){
//            map[i][9] = 2;
//        }
//        for(int i=0; i<4; i++){
//            massive[i] = array[i];
//            massive[i] = array[i];
//        }
//    }
//    bool ifWall(bool straight){
//        if(straight == true && map[massive[0].getX()-1][massive[0].getY()]){
//            return true;
//        }else if(straight == false && map[massive[0].getX()+2][massive[0].getY()] == 2){
//            return true;
//        }
//        return false;
//    }
//    void makeAHero(int h){
//        for(int i=0; i<4; i++){
//            map[massive[i].getX()][massive[i].getY()] = h;
//        }
//    }
//    void fillUP(){
//        for(int i=0; i<10; i++){
//            for(int j=0; j<10; j++){
//                map[i][j] = n;
//            }
//        }
//        for(int i=0; i<10; i++){
//            map[0][i] = 2;
//        }
//        for(int i=0; i<10; i++){
//            map[i][0] = 2;
//        }
//        for(int i=0; i<10; i++){
//            map[9][i] = 2;
//        }
//        for(int i=0; i<10; i++){
//            map[i][9] = 2;
//        }
//    }
//    void print(){
//        for(int i=0; i<10; i++){
//            for(int j=0;j <10; j++){
//                cout<<map[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//    }
//    bool heroJump(){
//        if(ifWall(true)){
//            return false;
//        }else{
//            for(int i=0; i<4; i++){
//                massive[i].jump();
//            }
//            fillUP();
//            makeAHero(1);
//            print();
//            return true;
//        }
//    }
//    bool heroComeDown(){
//        if(ifWall(false)){
//            return false;
//        }else{
//            for(int i=0; i<4; i++){
//                massive[i].comeDown();
//            }
//            fillUP();
//            makeAHero(1);
//            print();
//            return true;
//        }
//    }
//};
//int main(){
//    vector2D massive[4];
//    vector2D vec;
//    vector2D vec1;
//    vector2D vec2;
//    vector2D vec3;
//    vec.inPutXY(2,4);
//    vec1.inPutXY(vec.getX(),vec.getY()+1);
//    vec2.inPutXY(vec.getX()+1,vec.getY()+1);
//    vec3.inPutXY(vec.getX()+1,vec.getY());
//    massive[0] = vec;
//    massive[1] = vec1;
//    massive[2] = vec2;
//    massive[3] = vec3;
//    bool jumps[4];
//    int n=0;
//    mapGHero hero1(0,massive);
//    hero1.print();
//    cout<<endl;
//    hero1.makeAHero(1);
//    hero1.print();
//    cout<<endl;
//    jumps[n++] = hero1.heroJump();
//    cout<<endl;
//    jumps[n++] = hero1.heroJump();
//    cout<<endl;
//    jumps[n++] = hero1.heroComeDown();
//    cout<<endl;
//    jumps[n++] = hero1.heroComeDown();
//    cout<<endl;
//    jumps[n++] = hero1.heroComeDown();
//    cout<<endl;
//    for(int i=0; i<n; i++){
//        if(jumps[i]){
//            cout<<"TRUE"<<endl;
//        }else{
//            cout<<"FALSE"<<endl;
//        }
//    }
//    
//}
