////
////  game.cpp
////  FIrst_Project
////
////  Created by Данил on 27/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Point2D{
//    int x;
//    int y;
//public:
//    Point2D(int j, int i):x(j),y(i){}
//    Point2D():x(NULL),y(NULL){}
//    int getX(){
//        return x;
//    }
//    int getY(){
//        return y;
//    }
//    void moveRight(){y++;}
//    void moveleft(){y--;}
//    void moveUP(){x--;}
//    void moveDown(){x++;}
//    void putXY(int i, int j){
//        x = i;
//        y = j;
//    }
//    void operator=(Point2D a){
//        x = a.x;
//        y = a.y;
//    }
//    void newCordinats(int i, int j){
//        x = i;
//        y = j;
//    }
//};
//class Vector2D{
//    Point2D *a;
//    int top = 0;
//    int size;
//public:
//    Vector2D(int size2):size(NULL){a = new Point2D[size2];}
//    Vector2D(int i, int j):size(1){a = new Point2D(i,j);}
//    void pushFront(Point2D point){
//        a[top++] = point;
//        size++;
//    }
//    bool ifWallUp(int massive[10][10]);
//    bool ifWallRight(int massive[10][10]);
//    bool ifWallDown(int massive[10][10]);
//    bool ifWallLeft(int massive[10][10]);
//    void popFront(){
//        size--;
//        top--;
//    }
//    int sizE(){
//        return size;
//    }
//    ~Vector2D(){
//        delete a;
//    }
//    Point2D operator[](int length){
//        return a[length];
//    }
//    void moveRight(int massive[10][10]){
//        if(ifWallRight(massive)){
//            return;
//        }
//        for(int i=0; i<size; i++){
//            a[i].moveRight();
//        }
//    }
//    void moveLeft(int massive[10][10]){
//        if(ifWallLeft(massive)){
//            return;
//        }
//        for(int i=0; i<size; i++){
//            a[i].moveleft();
//        }
//    }
//    void moveUp(int massive[10][10]){
//        if(ifWallUp(massive)){
//            return;
//        }
//        for(int i=0; i<size; i++){
//            a[i].moveUP();
//        }
//    }
//    void moveDown(int massive[10][10]){
//        if(ifWallDown(massive)){
//            return;
//        }
//        for(int i=0; i<size; i++){
//            a[i].moveDown();
//        }
//    }
//    int getX(){
//        return a->getX();
//    }
//    int getY(){
//        return a->getY();
//    }
//    void nEwCordinats(int i, int j){
//        a->newCordinats(i, j);
//    }
//    bool ifBullet(int massive[10][10]);
//    int findBullet(int massive[10][10]);
//    void deleteElement(int n);
//};
//int main(){
//    int map[10][10];
//    Vector2D monsters(10);
//    Point2D monster1(4,4);
//    Point2D monster2(4,5);
//    Point2D monster3(4,6);
//    Point2D monster4(4,7);
//    Point2D monster5(4,8);
//    Point2D monster6(5,4);
//    Point2D monster7(5,5);
//    Point2D monster8(5,6);
//    Point2D monster9(5,7);
//    Point2D monster10(5,8);
//    monsters.pushFront(monster1);
//    monsters.pushFront(monster2);
//    monsters.pushFront(monster3);
//    monsters.pushFront(monster4);
//    monsters.pushFront(monster5);
//    monsters.pushFront(monster6);
//    monsters.pushFront(monster7);
//    monsters.pushFront(monster8);
//    monsters.pushFront(monster9);
//    monsters.pushFront(monster10);
//    for(int i=0; i<10; i++){
//        for(int j=0; j<10; j++){
//            map[i][j] = 0;
//        }
//    }
//    Vector2D a(8,8);
//    map[a.getX()][a.getY()] = 1;
//    char choose;
//    cout<<endl;
//    cout<<monsters.sizE()<<endl;
//    for(int i=0; i<monsters.sizE(); i++){
//            map[monsters[i].getX()][monsters[i].getY()] = 2;
//        
//    }
//    for(int i=0; i<10; i++){
//        map[0][i] = 8;
//        map[i][9] = 8;
//        map[9][i] = 8;
//        map[i][0] = 8;
//    }
//    cout<<endl;
//    Vector2D bullet(a.getX()-1, a.getY()-3);
//    while(true){
//        cin>>choose;
//        switch(choose){
//            case 'a':
//                a.moveLeft(map);
//                if(!monsters.ifWallLeft(map) && !monsters.ifWallUp(map)){
//                    monsters.moveLeft(map);
//                }else if(monsters.ifWallLeft(map) && !monsters.ifWallUp(map)){
//                    monsters.moveUp(map);
//                }else if(monsters.ifWallUp(map) && !monsters.ifWallRight(map)){
//                    monsters.moveRight(map);
//                }else if(monsters.ifWallRight(map)){
//                    monsters.moveDown(map);
//                }else{
//                    monsters.moveLeft(map);
//                }
//                if(monsters.ifBullet(map)){
//                    monsters.deleteElement(monsters.findBullet(map));
//                    map[monsters[monsters.findBullet(map)].getX()][monsters[monsters.findBullet(map)].getY()] = 0;
//                    map[bullet.getX()+1][bullet.getY()] = 0;
//                    bullet.nEwCordinats(a.getX()-1, a.getY());
//                }
//                break;
//            case 'd':
//                a.moveRight(map);
//                if(!monsters.ifWallLeft(map) && !monsters.ifWallUp(map)){
//                    monsters.moveLeft(map);
//                }else if(monsters.ifWallLeft(map) && !monsters.ifWallUp(map)){
//                    monsters.moveUp(map);
//                }else if(monsters.ifWallUp(map) && !monsters.ifWallRight(map)){
//                    monsters.moveRight(map);
//                }else if(monsters.ifWallRight(map)){
//                    monsters.moveDown(map);
//                }else{
//                    monsters.moveLeft(map);
//                }
//                if(monsters.ifBullet(map)){
//                    monsters.deleteElement(monsters.findBullet(map));
//                    map[monsters[monsters.findBullet(map)].getX()][monsters[monsters.findBullet(map)].getY()] = 0;
//                    map[bullet.getX()+1][bullet.getY()] = 0;
//                    bullet.nEwCordinats(a.getX()-1, a.getY());
//                }
//                break;
//        }
//        
//        for(int i=0; i<10; i++){
//            for(int j=0; j<10; j++){
//                map[i][j] = 0;
//            }
//        }
//        if(bullet.ifWallUp(map)){
//            map[bullet.getX()+1][bullet.getY()] = 0;
//            bullet.nEwCordinats(a.getX()-1, a.getY());
//        }
//        map[bullet.getX()][bullet.getY()] = 3;
//        bullet.moveUp(map);
//        for(int i=0; i<a.sizE(); i++){
//            map[a.getX()][a.getY()] = 1;
//        }
//        for(int i=0; i<10; i++){
//            map[0][i] = 8;
//            map[i][9] = 8;
//            map[9][i] = 8;
//            map[i][0] = 8;
//        }
//        for(int i=0; i<monsters.sizE(); i++){
//            map[monsters[i].getX()][monsters[i].getY()] = 2;
//            
//        }
//        for(int i=0; i<10; i++){
//            for(int j=0; j<10; j++){
//                 cout<<map[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//        if(map[a.getX()][a.getY()] == 0 ||monsters.sizE() == 0){
//            break;
//        }
//    }
//}
//bool Vector2D::ifWallUp(int massive[10][10]){
//    int k = 0;
//    int u = 0;
//    int o = 0;
//    if(size > 2){
//        for(int i=0; i<size; i++){
//            for(int j=0; j<size; j++){
//                if(a[i].getX() > a[j].getX()){
//                    u++;
//                    if(u == size){
//                        k = j;
//                        u = 0;
//                    }
//                }else{
//                    o++;
//                    if(o == size){
//                        k = i;
//                        o = 0;
//                    }
//                }
//            }
//            u = 0;
//            o = 0;
//        }
//    }
//    if(massive[a[k].getX()-1][a[k].getY()] == 8){
//        return true;
//    }else{
//        return false;
//    }
//}
//bool Vector2D::ifWallDown(int massive[10][10]){
//    int k = 0;
//    int u = 0;
//    int o = 0;
//    if(size > 2){
//        for(int i=0; i<size; i++){
//            for(int j=0; j<size; j++){
//                if(a[i].getX() < a[j].getX()){
//                    u++;
//                    if(u == size){
//                        k = j;
//                        u = 0;
//                    }
//                }else{
//                    o++;
//                    if(o == size){
//                        k = i;
//                        o = 0;
//                    }
//                }
//            }
//            u = 0;
//            o = 0;
//        }
//    }
//    if(massive[a[k].getX()+1][a[k].getY()] == 8){
//        return true;
//    }else{
//        return false;
//    }
//}
//bool Vector2D::ifWallRight(int massive[10][10]){
//    int k = 0;
//    int u = 0;
//    int o = 0;
//    if(size > 2){
//        for(int i=0; i<size; i++){
//            for(int j=0; j<size; j++){
//                if(a[i].getY() < a[j].getY()){
//                    u++;
//                    if(u == size){
//                        k = j;
//                        u = 0;
//                    }
//                }else{
//                    o++;
//                    if(o == size){
//                        k = i;
//                        o = 0;
//                    }
//                }
//            }
//            u = 0;
//            o = 0;
//        }
//    }
//    if(massive[a[k].getX()][a[k].getY()+1] == 8){
//        return true;
//    }else{
//        return false;
//    }
//}
//
//bool Vector2D::ifWallLeft(int massive[10][10]){
//    int k = 0;
//    int u = 0;
//    int o = 0;
//    if(size > 2){
//        for(int i=0; i<size; i++){
//            for(int j=0; j<size; j++){
//                if(a[i].getY() > a[j].getY()){
//                    u++;
//                    if(u == size){
//                        k = j;
//                        u = 0;
//                    }
//                }else{
//                    o++;
//                    if(o == size){
//                        k = i;
//                        o = 0;
//                    }
//                }
//            }
//            u = 0;
//            o = 0;
//        }
//    }
//    if(massive[a[k].getX()][a[k].getY()-1] == 8){
//        return true;
//    }else{
//        return false;
//    }
//}
//bool Vector2D::ifBullet(int massive[10][10]){
//    for(int i=0; i<size; i++){
//        if(massive[a[i].getX()+1][a[i].getY()] == 3 || massive[a[i].getX()][a[i].getY()+1] == 3 || massive[a[i].getX()][a[i].getY()-1] == 3){
//            return true;
//        }
//    }
//    return false;
//}
//int Vector2D::findBullet(int massive[10][10]){
//    for(int i=0; i<size; i++){
//        if(ifBullet(massive)){
//            return i;
//        }
//    }
//    return 0;
//}
//void Vector2D::deleteElement(int n){
//    for(int i=0; i<size; i++){
//       
//        if(i == n){
//            size--;
//            top = size;
//            continue;
//        }
//        a[i] = a[i];
//    }
//}
