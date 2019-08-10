////
////  3Pyramid.cpp
////  FIrst_Project
////
////  Created by Данил on 03/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//const static int n = 4;
//struct tower{
//    int up;
//    int tower[n];
//    bool operator ==(struct tower tow){
//        int temp = 0;
//        for(int i=0; i<n; i++){
//            if(tow.tower[i] == tower[i]){
//                temp++;
//            }
//        }
//        if(temp == n){
//            return true;
//        }else{
//            return false;
//        }
//    }
//    void operator =(struct tower tow){
//        for(int i=0; i<n; i++){
//            tower[i] = tow.tower[i];
//        }
//    }
//};
//void print(tower tower3){
//    for(int i=0; i<n; i++){
//        cout<<tower3.tower[i]<<endl;
//    }
//}
//int main(){
//    tower firstTower;
//    tower secondTower;
//    tower thirdTower;
//    for(int i=0; i<n; i++){
//        firstTower.tower[i] = n - i;
//        firstTower.up = i;
//        secondTower.tower[i] = 0;
//        thirdTower.tower[i] = 0;
//    }
//
//    secondTower.up = 0;
//    thirdTower.up = 0;
//
//    thirdTower.tower[thirdTower.up] = firstTower.tower[firstTower.up];
//    firstTower.tower[firstTower.up] = 0;
//    firstTower.up--;
//
//    print(firstTower);
//    cout<<endl;
//    print(secondTower);
//    cout<<endl;
//    print(thirdTower);
//    cout<<"_______"<<endl;
//
//    secondTower.tower[secondTower.up] = firstTower.tower[firstTower.up];
//    firstTower.tower[firstTower.up] = 0;
//    firstTower.up--;
//
//    print(firstTower);
//    cout<<endl;
//    print(secondTower);
//    cout<<endl;
//    print(thirdTower);
//    cout<<"_______"<<endl;
//    tower massive[3];
//    for(int i=0; i<4; i++){
//        massive[0].tower[i] = firstTower.tower[i];
//    }
//    massive[0].up = firstTower.up;
//    for(int i=0; i<4; i++){
//        massive[1].tower[i] = secondTower.tower[i];
//    }
//    massive[1].up = secondTower.up;
//    for(int i=0; i<4; i++){
//        massive[2].tower[i] = thirdTower.tower[i];
//    }
//    massive[2].up = thirdTower.up;
//
//    tower temp = thirdTower;
//    int tic = 3;
//    int i = 1;
//    while(true){
//        if(temp.tower[temp.up] % 2){
//                if(massive[i].tower[massive[i].up] > temp.tower[temp.up]){
//                    massive[i].up++;
//                    massive[i].tower[massive[i].up] = temp.tower[temp.up];
//                    for(int j = 0; j<3; j++){
//                        if(massive[j] == temp){
//                            temp.tower[temp.up] = 0;
//                            temp.up++;
//                            massive[j] = temp;
//                            if(massive[j].up != 0){
//                                massive[j].up--;
//                            }
//                            break;
//                        }
//                    }
//
//                }else if(massive[i].tower[massive[i].up] == 0){
//                    massive[i].up++;
//                    massive[i].tower[massive[i].up] = temp.tower[temp.up];
//                    for(int j = 0; j<3; j++){
//                        if(massive[j] == temp){
//                            temp.tower[temp.up] = 0;
//                            temp.up--;
//                            massive[j] = temp;
//                            if(massive[j].up != 0){
//                                massive[j].up--;
//                            }
//                            break;
//                        }
//                    }
//
//            }
//        }else{
//            int tmp = i;
//            if(tmp == 0){
//                tmp = 2;
//            }else{
//                tmp --;
//            }
//            if(massive[tmp].tower[massive[tmp].up] > temp.tower[temp.up]){
//                massive[tmp].up++;
//                massive[tmp].tower[massive[tmp].up] = temp.tower[temp.up];
//                for(int j = 0; j<3; j++){
//                    if(massive[j] == temp){
//                        temp.tower[temp.up] = 0;
//                        temp.up++;
//                        massive[j] = temp;
//                        if(massive[j].up != 0){
//                            massive[j].up--;
//                        }
//                        break;
//                    }
//                }
//
//                for(int j=0; j<3; j++){
//                    print(massive[j]);
//                    cout<<endl;
//                }
//                cout<<"_______"<<endl;
//            }else if(massive[tmp].tower[massive[tmp].up] == 0){
//                massive[tmp].up++;
//                massive[tmp].tower[massive[tmp].up] = temp.tower[temp.up];
//                for(int j = 0; j<3; j++){
//                    if(massive[j] == temp){
//                        temp.tower[temp.up] = 0;
//                        temp.up--;
//                        massive[j] = temp;
//                        if(massive[j].up != 0){
//                            massive[j].up--;
//                        }
//                        break;
//                    }
//                }
//            }
//        }
//        if(tic == 3){
//            thirdTower = temp;
//            secondTower = massive[1];
//            temp = secondTower;
//            i = 0;
//            massive[0] = firstTower;
//            massive[1] = secondTower;
//            massive[2] = thirdTower;
//        }else if(tic == 2){
//            secondTower = temp;
//            firstTower = massive[0];
//            temp = firstTower;
//            i = 2;
//            massive[0] = firstTower;
//            massive[1] = secondTower;
//            massive[2] = thirdTower;
//        }else{
//            firstTower = temp;
//            thirdTower = massive[2];
//            temp = thirdTower;
//            i = 1;
//            massive[0] = firstTower;
//            massive[1] = secondTower;
//            massive[2] = thirdTower;
//        }
//        tic --;
//        if(tic == 1){
//            tic = 3;
//        }
//
//
//            int counter = 0;
//                for(int i=0; i<n; i++){
//                    if(thirdTower.tower[i] == n-i){
//                        counter++;
//                    }
//                }
//                if(counter == n){
//                    break;
//                }
//    }
//    for(int i=0; i<n; i++){
//        cout<<thirdTower.tower[i]<<endl;
//    }
//
//}
//
////imposible made programm what will work with all exapmles, because we need first go from n = o to n = o.max then n = o.max to n = o and that mean that we need recursion.
