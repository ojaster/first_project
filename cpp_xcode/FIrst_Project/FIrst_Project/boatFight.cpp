//
//  project.cpp
//  FIrst_Project
//
//  Created by Данил on 12.11.18.
//  Copyright © 2018 Daniil. All rights reserved.
//
//
//#include <iostream>
//using namespace std;
//const int size = 10;
//class Boats{
//private:
//    int p1;
//    int p2;
//    int amountKillShips1;
//    int amountKillShips2;
//    int sea[size][size];
//    int amountShips;
//    int boatsTeam1[2][2];
//    int team1Atack[2][2];
//    int boatsTeam2[2][2];
//    int team2Atack[2][2];
//    int team1Life = 5;
//    int team2Life = 5;
//public:
//    
//    Boats(){
//        amountKillShips1 = 0;
//        amountKillShips2 = 0;
//        amountShips = 3;
//        p1 = 1;
//        p2 = 0;
//        for(int i=0; i<size; i++){
//            for(int j=0; j<size; j++){
//                sea[i][j]=0;
//            }
//        }
//    }
//    void showSea(){
//        for(int i=-1; i<size; i++){
//            cout<<i+1<<" ";
//        }
//        cout<<endl;
//       for(int i=0; i<size; i++){
//           cout<<i+1<<" "; //  вывод номера строка
//            for(int j=0; j<size; j++){
//                cout<<sea[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//    }
//    
//    void getShipsToFirstPerson(){
//        int x, y;
//        for(int i=0; i<amountShips; i++){
//            cout<<"input x and y (1-10)"<<endl;
//            cin>>x>>y;
//            sea[x-1][y-1] = 1; // так как в программировании индексация с нуля
//        }
//    }
//    
//    void attackByFirstPerson(){
//        int x, y;
//        cout<<"Атакуйте! input x and y (1-10)"<<endl;
//        cin>>x>>y;
//        if (sea[x-1][y-1] == 2) {
//             cout<<"вы попали"<<endl;
//            sea[x-1][y-1] = 0;
//            p1 = 1;
//            amountKillShips1++;
//        }else{
//            cout<<"промах"<<endl;
//            p1 = 0;
//            p2 = 1;
//        }
//    }
//    void attackBySecondPerson(){
//        int x, y;
//        cout<<"Атакуйте! input x and y (1-10)"<<endl;
//        cin>>x>>y;
//        if (sea[x-1][y-1] == 1) {
//             cout<<"вы попали"<<endl;
//            sea[x-1][y-1] = 0;
//            p2 = 1;
//            amountKillShips1++;
//        }else{
//            cout<<"промах"<<endl;
//            p2 = 0;
//            p1 = 1;
//            }
//
//    }
//    int getP1(){
//        return p1;
//    }
//    
//    int getP2(){
//        return p2;
//    }
//    void getShipsToSecondPerson(){
//        int x, y;
//        for(int i=0; i<amountShips; i++){
//            cout<<"input x and y (1-10)"<<endl;
//            cin>>x>>y;
//            sea[x-1][y-1] = 2;
//        }
//    }
//    
//    bool isFinish(){
//        int am1 = 0;//количество кораблей первого игрока
//        int am2 = 0;//количество кораблей второго игрока
//        
//        //считаем сколько кораблей осталось у игроков
//        for(int i=0; i<size; i++){
//            for(int j=0; j<size; j++){
//                if(sea[i][j] == 1){
//                    am1++;
//                }
//                if(sea[i][j] == 2){
//                    am2++;
//                }
//            }
//        }
//        
//            if(am1>=1 && am2>=1){// в случае если осталось у каждого больше, чем один корабль, то игра продолжается
//                return false;
//            }else{
//                return true;
//            }
//    }
//    void showWinner(){
//        if( amountKillShips1 >amountKillShips2){
//            cout<<"person1 won"<<endl;
//        }else{
//            cout<<"person2 won"<<endl;
//        }
//    }
//
//    
//};
//
//int main(){
//
//    Boats game;
//    game.showSea();
//    game.getShipsToFirstPerson();
//    game.showSea();
//    game.getShipsToSecondPerson();
//    game.showSea();
//    while(game.isFinish() == false){ //пока есть корабли игру нужно продолжать!!!
//        while(game.getP1() == 1 && game.isFinish() == false){
//            cout<<"person 1"<<endl;
//            game.attackByFirstPerson();
//            game.showSea();
//        }
//        while(game.getP2() == 1 && game.isFinish() == false){
//             cout<<"person 2"<<endl;
//             game.attackBySecondPerson();
//             game.showSea();
//         }
//    }
//    game.showWinner();
//}
