////
////  chess.cpp
////  FIrst_Project
////
////  Created by Данил on 08/04/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class ChessPlate{
//public:
//    int chessPlate[10][10];
////    void virtual basicClass() const;
//    ChessPlate(int number = 0){
//        for(int i=0; i<10; i++){
//            for(int j=0; j<10; j++){
//                chessPlate[i][j] = number;
//            }
//        }
//    }
//    void virtual cheesPlateCout()const;
//    void virtual move(){}
//};
//
//void ChessPlate::cheesPlateCout()const{
//    for(int i=0; i<10; i++){
//        for(int j=0; j<10; j++){
//            cout<<chessPlate[i][j];
//        }
//        cout<<endl;
//    }
//}
//class Chessfirst:public ChessPlate{
//public:
//    Chessfirst(int number = 0):ChessPlate(number){
//        for(int i=0; i<10; i++){
//            for(int j=0; j<10; j++){
//                chessPlate[1][j] = 1;
//                chessPlate[8][j] = 1;
//            }
//        }
//    }
//
//    void virtual cheesPlateCout()const;
//    void virtual move();
//
//
//};
//void Chessfirst::move(){
//    int witchfigurex;
//    int witchfigurey;
//    int x;
//    do{
//    cout<<"enter x figure: ";
//    cin>>witchfigurex;
//    cout<<"enter y figure: ";
//    cin>>witchfigurey;
//
//
//    }while(chessPlate[witchfigurex][witchfigurey] == 0);
//    do{
//    cout<<"enter x: ";
//    cin>>x;
//    }while(x == 9);
//    chessPlate[x][witchfigurey] = chessPlate[witchfigurex][witchfigurey];
//    chessPlate[witchfigurex][witchfigurey] = 0;
//    cheesPlateCout();
//}
//void Chessfirst::cheesPlateCout()const{
//    for(int i=0; i<10; i++){
//        for(int j=0; j<10; j++){
//            cout<<chessPlate[i][j];
//        }
//        cout<<" "<<endl;
//    }
//}
//class Chesssecond:public ChessPlate{
//public:
//    Chesssecond(int number = 0):ChessPlate(number){
//        for(int i=0; i<10; i++){
//            for(int j=0; j<10; j++){
//                chessPlate[0][0] = 2;
//                chessPlate[0][9] = 2;
//
//                chessPlate[9][0] = 2;
//                chessPlate[9][9] = 2;
//            }
//        }
//    }
//
//    void virtual cheesPlateCout()const;
//    void virtual move();
//
//
//};
//void Chesssecond::move(){
//    int witchfigurex;
//    int witchfigurey;
//    int x;
//    int y;
//    do{
//        cout<<"enter x figure: ";
//        cin>>witchfigurex;
//        cout<<"enter y figure: ";
//        cin>>witchfigurey;
//
//
//    }while(chessPlate[witchfigurex][witchfigurey] == 0);
//    int choose = 0;
//    cout<<"enter in which way 2 will move 1 = x; 2 = y"<<endl;
//    cout<<"enter:"<<endl;
//    cin>>choose;
//    if(choose == 1){
//        cout<<"enter x: ";
//        cin>>x;
//        chessPlate[x][witchfigurey] = chessPlate[witchfigurex][witchfigurey];
//    }else{
//        cout<<"enter y: ";
//        cin>>y;
//        chessPlate[witchfigurex][y] = chessPlate[witchfigurex][witchfigurey];
//    }
//
//    chessPlate[witchfigurex][witchfigurey] = 0;
//    cheesPlateCout();
//}
//void Chesssecond::cheesPlateCout()const{
//    for(int i=0; i<10; i++){
//        for(int j=0; j<10; j++){
//            cout<<chessPlate[i][j];
//        }
//        cout<<" "<<endl;
//    }
//}
//class Chessthird:public ChessPlate{
//public:
//    Chessthird(int number = 0):ChessPlate(number){
//        for(int i=0; i<10; i++){
//            for(int j=0; j<10; j++){
//                chessPlate[0][1] = 3;
//                chessPlate[0][8] = 3;
//
//                chessPlate[9][1] = 3;
//                chessPlate[9][8] = 3;
//            }
//        }
//    }
//
//    void virtual cheesPlateCout()const;
//    void virtual move();
//
//
//};
//void Chessthird::move(){
//    int witchfigurex;
//    int witchfigurey;
//    int x;
//    int y;
//    do{
//        cout<<"enter x figure: ";
//        cin>>witchfigurex;
//        cout<<"enter y figure: ";
//        cin>>witchfigurey;
//
//
//    }while(chessPlate[witchfigurex][witchfigurey] == 0);
//    do{
//        cout<<"enter x: ";
//        cin>>x;
//        cout<<"enter y: ";
//        cin>>y;
//    }while(x == 9);
//    chessPlate[x][y] = chessPlate[witchfigurex][witchfigurey];
//    chessPlate[witchfigurex][witchfigurey] = 0;
//    cheesPlateCout();
//}
//void Chessthird::cheesPlateCout()const{
//    for(int i=0; i<10; i++){
//        for(int j=0; j<10; j++){
//            cout<<chessPlate[i][j];
//        }
//        cout<<" "<<endl;
//    }
//}
//
//class Chessfour:public ChessPlate{
//public:
//    Chessfour(int number = 0):ChessPlate(number){
//        for(int i=0; i<10; i++){
//            for(int j=0; j<10; j++){
//                chessPlate[0][2] = 4;
//                chessPlate[0][7] = 4;
//
//                chessPlate[9][2] = 4;
//                chessPlate[9][7] = 4;
//            }
//        }
//    }
//
//    void virtual cheesPlateCout()const;
//    void virtual move();
//
//
//};
//void Chessfour::move(){
//    int witchfigurex;
//    int witchfigurey;
//    int x;
//    int y;
//    do{
//        cout<<"enter x figure: ";
//        cin>>witchfigurex;
//        cout<<"enter y figure: ";
//        cin>>witchfigurey;
//
//
//    }while(chessPlate[witchfigurex][witchfigurey] == 0);
//    int mode;
//    cout<<"change mode: 1 = yes 2 = no"<<endl;
//    cin>>mode;
//    if(mode == 2){
//    do{
//        cout<<"enter x: ";
//        cin>>x;
//    }while(x != witchfigurex-3 && x != witchfigurex+3);
//    do{
//        cout<<"enter y: ";
//        cin>>y;
//    }while(y != witchfigurey + 1 && y != witchfigurey - 1);
//    }else{
//
//        do{
//            cout<<"enter y: ";
//            cin>>y;
//        }while(y != witchfigurey + 3 && y != witchfigurey - 3);
//        do{
//            cout<<"enter x: ";
//            cin>>x;
//        }while(x != witchfigurex - 1 && x != witchfigurex + 1);
//    }
//
//    chessPlate[x][y] = chessPlate[witchfigurex][witchfigurey];
//    chessPlate[witchfigurex][witchfigurey] = 0;
//    cheesPlateCout();
//}
//void Chessfour::cheesPlateCout()const{
//    for(int i=0; i<10; i++){
//        for(int j=0; j<10; j++){
//            cout<<chessPlate[i][j];
//        }
//        cout<<" "<<endl;
//    }
//}
//int main(){
////    ChessPlate * plate = new Chessfirst();
////    plate->cheesPlateCout();
////    plate->move();
////    delete plate;
////
////    ChessPlate * plate2 = new Chesssecond();
////    plate2->cheesPlateCout();
////    plate2->move();
////    delete plate2;
////
////    ChessPlate * plate3 = new Chessthird();
////    plate3->cheesPlateCout();
////    plate3->move();
////    delete plate3;
////    ChessPlate * plate4 = new Chessfour();
////    plate4->cheesPlateCout();
////    plate4->move();
////    plate4->cheesPlateCout();
////    plate4->move();
////    delete plate4;
//
//}
