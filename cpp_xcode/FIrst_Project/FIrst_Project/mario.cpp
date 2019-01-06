////
////  mario.cpp
////  FIrst_Project
////
////  Created by Данил on 13/12/2018.
////  Copyright © 2018 Daniil. All rights reserved.
//////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <time.h>
//#include <unistd.h>
//#include <term.h>
////сделать броню и оружие для героя
//using namespace std;
//int const n=10;
//class Mario{
//private:
////    int flyUpRegistor;
////    int flyDownRegistor;
////    int flyRightRegistor;
////    int flyLeftRegistor;
//    //w
//    int x;
//    int y;
////    //a
////    int u=n-2;
////    int v=n-2;
////    //s
////    int w=n-2;
////    int d=n-2;
////    //d
////    int r=n-2;
////    int t=n-2;
//    int heroArmour;
//    char flyRegistor;
//    int heroHealth=5;
//    int map[n][n];
//    int monsters[n][n];
//    int fraG=0;
//    int moves=0;
//public:
//    void createHero(){
//        int xI;
//        int xJ;
//        do{
//
//            xI=rand()%n;
//            xJ=rand()%n;
//            if(map[xI][xJ]!=1){
//                break;
//            }
//        }while(1);
//         map[xI][xJ]=2;
//        x=xI;
//        y=xJ;
//    }
//    void fillMap(){
//        for(int i=0; i<n; i++){
//            for(int j=0; j<n; j++){
//                map[i][j]=0;
//            }
//        }
//    }
//
////    void heroMovingTracker(){
////        for(heroTreackerI<n; heroTrackerI++;){
////            for(heroTreackerJ<n; heroTrackerJ++;){
////                map[heroTrackerI-heroTrackerI][heroTrackerJ-heroTrackerJ]=2;
////            }
////        }
////    }
//
//
//
////    void ClearScreen(){
////        if (!cur_term)
////        {
////            int result;
////            setupterm( NULL, STDOUT_FILENO, &result );
////            if (result <= 0) return;
////        }
////
////        putp( tigetstr( "clear" ) );
////    }
//    void createMonstters(){
//        int const amount=5;
//        int array[amount][2];
//        for(int i=0; i<amount; i++){
//            array[i][0]=rand()%n;
//            array[i][1]=rand()%n;
//        }
//        for(int i=0; i<amount; i++){
//            int xI=array[i][0];
//            int xJ=array[i][1];
//                map[xI][xJ]=1;
//        }
//    }
//    void createArmour(){
//        int const armour=5;
//        int array[armour][2];
//        for(int i=0; i<armour; i++){
//            array[i][0]=rand()%n;
//            array[i][1]=rand()%n;
//        }
//        for(int i=0; i<armour; i++){
//            int xI=array[i][0];
//            int xJ=array[i][1];
//            map[xI][xJ]=4;
//        }
//    }
//    void displayMap(){
//       // ClearScreen();
//        //system("clear");
//        for(int i=0; i<n; i++){
//            for(int j=0; j<n; j++){
//                cout<<map[i][j]<<" ";
//
//            }
//            cout<<endl;
//        }
//        cout<<"Your health:"<<heroHealth<<endl;
//        cout<<"Your Armour:"<<heroArmour<<endl;
//        cout<<"Your FraG:"<<fraG<<endl;
//        cout<<"Your Moves:"<<moves<<endl;
//    }
//
//    bool checkMonsters(int i,int j){
//        if(map[i][j]==1){
//            return true;
//        }else{
//            return false;
//        }
//    }
//    bool checkArmour(int i,int j){
//        if(map[i][j]==4){
//            return true;
//        }else{
//            return false;
//        }
//    }
//    void doStep(){
//        while(heroHealth!=0){
//            cin>>flyRegistor;
//            switch(flyRegistor){
//                case 'w':
//                    if(x-1>=0){
//                        moves++;
//                        bool res2=checkArmour(x-1,y);
//                        if(res2==true){
//                            heroArmour++;
//                        }
//                        bool res=checkMonsters(x-1,y);
//                        if(res==true && heroArmour>0){
//                            heroArmour--;
//                            fraG++;
//                        }else if(res==true){
//                            heroHealth--;
//                            fraG++;
//                        }
//                        map[x][y]=0;
//                        map[x-1][y]=2;
//                        x=x-1;
//                        displayMap();
//                    }else{
//                        cout<<"You can't make step"<<endl;
//                    }
//                    break;
//                case 'a':
//                    moves++;
//                    if(x+1>=0){
//                        bool res2=checkArmour(x,y-1);
//                        if(res2==true){
//                            heroArmour++;
//                        }
//                        bool res=checkMonsters(x,y-1);
//                         if(res==true && heroArmour>0){
//                            heroArmour--;
//                             fraG++;
//                         }else if(res==true){
//                             heroHealth--;
//                             fraG++;
//                         }
//                        map[x][y]=0;
//                        map[x][y-1]=2;
//                        y=y-1;
//                        displayMap();
//                    }else{
//                        cout<<"You can't make step"<<endl;
//                    }
//                    break;
//                case 's':
//                    moves++;
//                        if(x+1<=n-1){
//                            bool res2=checkArmour(x+1,y);
//                            if(res2==true){
//                                heroArmour++;
//                            }
//                        bool res=checkMonsters(x+1,y);
//                         if(res==true && heroArmour>0){
//                            heroArmour--;
//                             fraG++;
//                         }else if(res==true){
//                             heroHealth--;
//                             fraG++;
//                         }
//
//                        map[x][y]=0;
//                        map[x+1][y]=2;
//                        x=x+1;
//                        displayMap();
//                    }else{
//                        cout<<"You can't make step"<<endl;
//                    }
//                    break;
//                case 'd':
//                    moves++;
//                        if(y+1<=n-1){
//                            bool res2=checkArmour(x,y+1);
//                            if(res2==true){
//                                    heroArmour++;
//                                }
//                        bool res=checkMonsters(x,y+1);
//                         if(res==true && heroArmour>0){
//                            heroArmour--;
//                             fraG++;
//                        }else if(res==true){
//                            heroHealth--;
//                            fraG++;
//                        }
//
//                        map[x][y]=0;
//                        map[x][y+1]=2;
//                        y=y+1;
//                        displayMap();
//                    }else{
//                        cout<<"You can't make step"<<endl;
//                    }
//                    break;
//
//            }
//
//        }
//        cout<<"Game Over!!"<<endl;
//    }
////    void flyRegistorFunct(){
////        while(heroHealth!=0){
////            cin>>flyRegistor;
////            for(int i=0; i<n; i++){
////                for(int j=0; j<n; j++){
////                    if(flyRegistor=="w"){
////                        map[x][y+1]=2;
////                        cout<<map[i][j]<<" ";
////                    }
////                    if(flyRegistor=="a"){
////                        map[x-1][y]=2;
////                        cout<<map[i][j]<<" ";
////                    }
////                    if(flyRegistor=="s"){
////                        map[x][y-1]=2;
////                        cout<<map[i][j]<<" ";
////                    }
////                    if(flyRegistor=="d"){
////                        map[x+1][y]=2;
////                        cout<<map[i][j]<<" ";
////                    }
////                    if(heroTrackerIJ==monsters[i][j]){
////                        heroHealth=-1;
////                    }
////                }
////                cout<<endl;
////
////                }
////        }
////
////
////
////    }
//
//};
//int main(){
//    srand(time(NULL));
//    Mario(hero1);
////    hero1.heroTrackerON();
//    hero1.fillMap();
//    hero1.createMonstters();
//    hero1.createArmour();
//    hero1.createHero();
//    hero1.displayMap();
//    hero1.doStep();
////    hero1.flyRegistorFunct();
//
//
//}
//
