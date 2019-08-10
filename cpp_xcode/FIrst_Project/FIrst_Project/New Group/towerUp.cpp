////
////  towerUp.cpp
////  FIrst_Project
////
////  Created by Данил on 04/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//static const int n = 5;
//struct tower{
//        int up = 0;//индекс вершины в массиве
//        int tower[n];
//        bool operator ==(struct tower tow){
//            int temp = 0;
//            for(int i=0; i<n; i++){
//                if(tow.tower[i] == tower[i]){
//                    temp++;
//                }
//            }
//            if(temp == n){
//                return true;
//            }else{
//                return false;
//            }
//        }
//        void operator =(struct tower tow){
//            for(int i=0; i<n; i++){
//                tower[i] = tow.tower[i];
//            }
//        }
//
//};
//struct state{
//    int n;
//    int src;
//    int tmp;
//    int step;
//    int dest;
//};
//bool ifTower(tower tow);
//void print(tower tow);
//void doTowers(int,char,char,char);
//vector<int> towers1(int n, int src, int dest, int tmp);
//int main(){
//        tower firstTower;
//        tower secondTower;
//        tower thirdTower;
//        for(int i=0; i<n; i++){
//            firstTower.tower[i] = n - i;
//            firstTower.up = i;
//            secondTower.tower[i] = 0;
//            thirdTower.tower[i] = 0;
//        }
//    tower massive[3];
//    massive[0] = firstTower;
//    massive[1] = secondTower;
//    massive[2] = thirdTower;
//    for(int i=0; i<3; i++){
//        massive[i].up = 0;
//    }
//    massive[0].up = n-1;
//  //  doTowers(10,'A','B','C');
//    vector<int> array = towers1(n,1,2,3);
//    int i = 0;
//    int j = 1;
//    bool tic = true;
//    while(true){
//        int a = array[j]-1;// номер башни, куда перемещаем (-1 так как отсчет с нуля)
//        int b = array[i]-1; //номер башни, с которой перемещаем
//        if(massive[a].tower[massive[a].up] == 0){
//            tic = true;
//        }
//        if(tic == false){
//            massive[a].up++;
//        }
//        tic = false;
//        massive[a].tower[massive[a].up] = massive[b].tower[massive[b].up];
//        massive[b].tower[massive[b].up] = 0;
//        massive[b].up--;
//
//        print(massive[0]);
//        cout<<endl;
//        print(massive[1]);
//        cout<<endl;
//        print(massive[2]);
//        cout<<endl;
//        cout<<"________________"<<endl;
//        i = i+2;
//        j = j+2;
//        if(ifTower(massive[1])){
//            break;
//        }
//
//    }
//    print(massive[1]);
//}
//
////Проверка на Башню Ханое
//bool ifTower(tower tow){
//    int counter = 0;
//    for(int i = 0; i<n; i++){
//        if(tow.tower[i] == n-i){
//            counter++;
//        }
//    }
//    return (counter == n) ? true : false;
//}
//
//void print(tower tow){
//    for(int i=0; i<n; i++){
//        cout<<tow.tower[i]<<endl;
//    }
//}
//void doTowers(int n, char from, char tmp, char to){
//    if(n == 1){
//        cout<<"move disk "<<n<<" from "<<from<<" to "<<to<<endl;
//        return;
//    }
//    doTowers(n-1,from, to, tmp);// from--tmp
//    cout<<"move disk "<<n<<" from "<<from<<" to "<<to<<endl;
//    doTowers(n-1,tmp, from, to);// from--tmp
//}
//// n - количество дисков
//vector<int> towers1(int n, int src, int dest, int tmp){
//    vector<int> array;
//    vector<state> stack;
//    state stat;
//    stat.n = n;
//    stat.src = src;
//    stat.dest = dest;
//    stat.tmp = tmp;
//    stat.step = 0;
//    stack.push_back(stat);
//    while(stack.size() > 0){
//        state &stat = stack.back();
//        switch(stat.step){
//            case 0:
//                if(stat.n == 0){
//                    stack.pop_back();
//                }else{
//                    ++stat.step;
//                    state neState;
//                    neState.n = stat.n - 1;
//                    neState.src = stat.src;
//                    neState.dest = stat.tmp;
//                    neState.tmp = stat.dest;
//                    neState.step = 0;
//                    stack.push_back(neState);
//                }
//                break;
//            case 1:
//                cout<<stat.src<<"- >"<<stat.dest<<endl;
//                array.push_back(stat.src);
//                array.push_back(stat.dest);
//                ++stat.step;
//                state neState;
//                neState.n = stat.n - 1;
//                neState.src = stat.tmp;
//                neState.dest = stat.dest;
//                neState.tmp = stat.src;
//                neState.step = 0;
//                stack.push_back(neState);
//                break;
//            case 2:
//                stack.pop_back();
//                break;
//
//        }
//    }
//    return array;
//}
