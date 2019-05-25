////
////  2DQuize.cpp
////  FIrst_Project
////
////  Created by Данил on 22/05/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//class TwoDQuize{
//private:
//    int n = 10;
//    int moves;// move count
//    char moveChoose;// ask one of w,a,s or d and make a move
//    int map[10][10]; // map
//    int heroHealth = 1;
//    int x;
//    int y;
//    
//    int h;
//    int k;
//    
//    int z;
//    int s;
//    
//    int q;
//    int o;
//public:
//    void instructions();//1
//    void moveMechanic();//1
//    void mAp(); //1
//    void hero();//1
//    void enemies();//1
//    void wall();//1
//    void winPoint();//1
//    bool moveCheck(int x, int y); //1
//    bool check();//1
//    bool enemyCheck();
//    void lose(); //1
//    void win(); //1
//    void showMap(); //1
//    void mOves(); // //1
//    void enemyAi();//1
//    void wallEditor();//1
//    bool pointCheck(int x, int y);//1
//    
//};
//void TwoDQuize::instructions(){
//    cout<<"your target is arrive winpoint which is 4"<<endl;
//    cout<<"2 = is a wall"<<endl;
//    cout<<"1 = is a hero"<<endl;
//    cout<<"3 = is an enemy"<<endl;
//}
//
//bool  TwoDQuize::enemyCheck(){
//    if(map[x][y] == map[z][s]){
//        heroHealth--;
//        return true;
//    }else{
//        return false;
//    }
//}
//
//void TwoDQuize::winPoint(){
//    srand((time(NULL)));
//    int d;
//    int u;
//    do{
//    d = rand() % n;
//    u = rand() % n;
//   }while(map[d][u] == 3 && map[d][u] == 2 && map[d][u] == 1);
//    q = d;
//    o = u;
//    map[q][o] = 4;
//    
//}
//
//bool TwoDQuize::check(){
//    if(map[x][y] == map[q][o]){
//        return true;
//    }else{
//        return false;
//    }
//}
//
//void TwoDQuize::lose(){
//    cout<<"lose"<<endl;
//}
//void TwoDQuize::win(){
//    cout<<"win"<<endl;
//}
//void TwoDQuize::mOves(){
//    cout<<moves<<endl;
//}
//bool TwoDQuize::moveCheck(int x, int y){
//    if(map[x][y] == 2){
//        return true;
//    }else{
//        return false;
//    }
//}
//bool TwoDQuize::pointCheck(int x, int y){
//    if(map[x][y] == 4){
//        return true;
//    }else{
//        return false;
//    }
//}
//
//void TwoDQuize::enemies(){
//    srand((time(NULL)));
//    int w;
//    int g;
// //  do{
//        w = 9;
//        g = 9;
//   // }while(map[w][g] == 4 && map[w][g] == 2 && map[w][g] == 1);
//    z = w;
//    s = g;
//    map[z][s] = 3;
//    
//    
//}
//void TwoDQuize::wall(){
//    int xi;
//    int yj;
//    xi = 1;
//    yj = 1;
//    map[xi][yj] = 2;
//    h = xi;
//    k = yj;
//    while(moveChoose!='b'){
//        cout<<"Enter move:";
//        cin>>moveChoose;
//        switch(moveChoose){
//            case 'w':
//                if(h-1>=0){
//                    if(moveCheck(h-1, k) == false){
//                        map[h-1][k] = 2;
//                        h = h - 1;
//                    }else{
//                        cout<<"you can't go there"<<endl;
//                    }
//                }
//                showMap();
//                break;
//            case 'a':
//                if(k-1>=0){
//                    if(moveCheck(h, k-1) == false){
//                        map[h][k-1] = 2;
//                        k = k - 1;
//                    }else{
//                        cout<<"you can't go there"<<endl;
//                    }
//                }
//                showMap();
//                break;
//                
//            case 's':
//                if(h+1>=0 && h+1<=9){
//                    if(moveCheck(h+1, k) == false){
//                    map[h+1][k] = 2;
//                    h = h + 1;
//                }else{
//                    cout<<"you can't go there"<<endl;
//                }
//                }
//                showMap();
//                break;
//            case 'd':
//                if(k+1>=0 && k+1<=9){
//                    if(moveCheck(h, k+1) == false){
//                    map[h][k+1] = 2;
//                    k = k+ 1;
//                }else{
//                    cout<<"you can't go there"<<endl;
//                }
//                }
//                showMap();
//                break;
//                
//                
//                
//        }
//    }
//}
//void TwoDQuize::wallEditor(){
//    int t;
//    int d;
//    moveChoose = 'f';
//    while(moveChoose!='b'){
//        cout<<"what part of wall you want delete"<<endl;
//        cout<<"d:";
//        cin>>d;
//        cout<<"t:";
//        cin>>t;
//        cout<<":";
//        cin>>moveChoose;
//        map[d][t] = 0;
//        showMap();
//        cout<<endl;
//    }
//    
//}
//void TwoDQuize::mAp(){
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            map[i][j] = 0;
//        }
//    }
//}
//void TwoDQuize::showMap(){
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            cout<<map[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//}
//void TwoDQuize::hero(){
//    int xi;
//    int yj;
//    xi = 0;
//    yj = 0;
//    map[xi][yj] = 1;
//    x = xi;
//    y = yj;
//    
//
//}
//void TwoDQuize::enemyAi(){
//    int choose;
//    srand((time(NULL)));
//    choose = rand() % 5;
//    if(choose == 1){
//        if(moveCheck(z-1, s) == false && pointCheck(z+1, s) == false && z-1>=0){
//            map[z][s] = 0;
//            map[z-1][s] = 3;
//            z = z - 1;
//        }
//    }
//    if(choose == 2){
//        if(moveCheck(z+1, s) == false && pointCheck(z+1, s) == false && (z+1>=0 && z+1<=9)){
//            map[z][s] = 0;
//            map[z+1][s] = 3;
//            z = z + 1;
//        }
//    }
//    if(choose == 3){
//        if(moveCheck(z, s-1) == false && pointCheck(z+1, s) == false && s-1>=0){
//            map[z][s] = 0;
//            map[z][s-1] = 3;
//            s = s - 1;
//        }
//    }
//    if(choose == 4){
//        if(moveCheck(z, s+1) == false && pointCheck(z+1, s) == false && (s+1>=0 && s+1<=9)){
//            map[z][s] = 0;
//            map[z][s+1] = 3;
//            s = s + 1;
//            
//        }
//    }
//}
//void TwoDQuize::moveMechanic(){
//    while(heroHealth!=0){
//        cout<<"Enter move:";
//        cin>>moveChoose;
//        switch(moveChoose){
//            case 'w':
//                enemyAi();
//                if(x-1>=0){
//                    if(moveCheck(x-1, y) == false){
//                        map[x][y] = 0;
//                        map[x-1][y] = 1;
//                        x = x - 1;
//                        if(enemyCheck() == true){
//                            lose();
//                            break;
//                        }
//                        if(check() == true){
//                            win();
//                            break;
//                        }
//                    }else{
//                    cout<<"you can't go there"<<endl;
//                    }
//                }
//                showMap();
//                break;
//            case 'a':
//                 enemyAi();
//                if(y-1>=0){
//                    if(moveCheck(x, y-1) == false){
//                        map[x][y] = 0;
//                        map[x][y-1] = 1;
//                        y = y - 1;
//                        if(enemyCheck() == true){
//                            lose();
//                            break;
//                        }
//                        if(check() == true){
//                            win();
//                            break;
//                        }
//                    }else{
//                        cout<<"you can't go there"<<endl;
//                    }
//                }
//                showMap();
//                break;
//
//            case 's':
//                 enemyAi();
//                if(moveCheck(x+1, y) == false){
//                if(x+1>=0 && x+1<=9){
//                    map[x][y] = 0;
//                    map[x+1][y] = 1;
//                    x = x + 1;
//                    if(enemyCheck() == true){
//                        lose();
//                    }
//                    if(check() == true){
//                        win();
//                        break;
//                    }
//                }else{
//                    cout<<"you can't go there"<<endl;
//                }
//                }
//                showMap();
//                break;
//            case 'd':
//                 enemyAi();
//                if(y+1>=0 && y+1<=9){
//                    if(moveCheck(x, y+1) == false){
//                    map[x][y] = 0;
//                    map[x][y+1] = 1;
//                    y = y + 1;
//                    if(enemyCheck() == true){
//                        lose();
//                        break;
//                    }
//                    if(check() == true){
//                        win();
//                        break;
//                    }
//                }else{
//                    cout<<"you can't go there"<<endl;
//                }
//                }
//                showMap();
//                break;
//                
//                
//        }
//    }
//}
//int main(){
//    TwoDQuize hero;
//    hero.mAp();
//    hero.winPoint();
//    hero.showMap();
//    hero.enemies();
//    hero.wall();
//    hero.wallEditor();
//    cout<<" --"<<endl;
//    hero.hero();
//    hero.showMap();
//    hero.moveMechanic();
//
//}
