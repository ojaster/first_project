////
////  snope.cpp
////  FIrst_Project
////
////  Created by Данил on 04/12/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//void print(int (*mas)[10]){
//    for(int i=0; i<10; i++){
//        for(int j = 0; j<10; j++){
//            cout<<mas[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//}
//void swaP(int (*a)[2]){
//    int b[2] = {a[0][0],a[0][1]};
//    a[0][0] = a[1][0];
//    a[0][1] = a[1][1];
//    a[1][0] = b[0];
//    a[1][1] = b[1];
//}
//int main(){
//    int snake[2][2];
//     snake[0][0] = 0;
//     snake[0][1] = 1;
//     snake[1][0] = 0;
//     snake[1][1] = 2;
//    int massive[10][10] = {0};
//    massive[0][1] = 1;
//    massive[0][2] = 1;
//    int i = 0;
//    while(true){
//        print(massive);
//        char choose;
//        cout<<"input choose"<<endl;
//        cin>>choose;
//        switch(choose){
//            case 'w':
//                massive[snake[0][0]][snake[0][1]] = 0;
//                snake[0][0] = snake[1][0]-1;
//                snake[0][1] = snake[1][1];
//                massive[snake[0][0]][snake[0][1]] = 1;
//                break;
//            case 'a':
//                massive[snake[0][0]][snake[0][1]] = 0;
//                snake[0][1] = snake[1][1]-1;
//                snake[0][0] = snake[1][0];
//                massive[snake[0][0]][snake[0][1]] = 1;
//                break;
//            case 's':
//                massive[snake[0][0]][snake[0][1]] = 0;
//                snake[0][0] = snake[1][0]+1;
//                snake[0][1] = snake[1][1];
//                massive[snake[0][0]][snake[0][1]] = 1;
//                break;
//            case 'd':
//                massive[snake[0][0]][snake[0][1]] = 0;
//                snake[0][1] = snake[1][1]+1;
//                snake[0][0] = snake[1][0];
//                massive[snake[0][0]][snake[0][1]] = 1;
//                break;
//        }
//        swaP(snake);
//    }
//}
