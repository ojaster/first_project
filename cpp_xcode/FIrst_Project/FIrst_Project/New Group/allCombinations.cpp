////
////  allCombinations.cpp
////  FIrst_Project
////
////  Created by Данил on 04/10/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//
//void inputData(map<int, vector<int>> &m) {
//       vector<int> temp;
//       //1
//       temp.push_back(1);
//       temp.push_back(2);
//       temp.push_back(4);
//       m.insert({1,temp});
//       temp.clear();
//
//       //2
//       temp.push_back(1);
//       temp.push_back(2);
//       temp.push_back(5);
//       temp.push_back(3);
//       m.insert({2,temp});
//       temp.clear();
//
//       //3
//       temp.push_back(2);
//       temp.push_back(3);
//       temp.push_back(6);
//       m.insert({3,temp});
//       temp.clear();
//       //4
//       temp.push_back(4);
//       temp.push_back(1);
//       temp.push_back(5);
//       temp.push_back(7);
//       m.insert({4,temp});
//       temp.clear();
//       //5
//       temp.push_back(2);
//       temp.push_back(8);
//       temp.push_back(4);
//       temp.push_back(6);
//       temp.push_back(5);
//       m.insert({5,temp});
//       temp.clear();
//       //6
//       temp.push_back(9);
//       temp.push_back(6);
//       temp.push_back(5);
//       temp.push_back(3);
//       m.insert({6,temp});
//       temp.clear();
//       //7
//       temp.push_back(4);
//       temp.push_back(6);
//       temp.push_back(5);
//       temp.push_back(7);
//       m.insert({7,temp});
//       temp.clear();
//       //8
//       temp.push_back(7);
//       temp.push_back(9);
//       temp.push_back(0);
//       temp.push_back(5);
//       temp.push_back(8);
//       m.insert({8,temp});
//       temp.clear();
//       //9
//       temp.push_back(6);
//       temp.push_back(8);
//       temp.push_back(9);
//       m.insert({9,temp});
//       temp.clear();
//       //0
//       temp.push_back(0);
//       temp.push_back(8);
//       m.insert({0,temp});
//       temp.clear();
//}
//
//int main(){
//    map<int, vector<int>> m; // { 1 : 1, 2, 4}
//    inputData(m);
//    // считать пароль
//    int password;
//    cin>>password;
//    if(password%10 == (password-password%10)/10){
//        password -=(password-password%10);
//    }
//    vector<vector<int>> data;
//    while(password>0){
//        int x = password%10;//получить последнюю цифру числа
//        vector<int> current = m[x];//достаем допустиыме значения x
//        data.push_back(current);
//        password/=10;//отрезать цифру числа
//    }
//
//    vector<int> res;
//    //для каждой цифры вытащить список дсотупных вариантов
//    for(int i=0; i<data.size(); i++){
//        for(int j=0; j<data[i].size(); j++){
//            cout<<data[i][j]<<",";
//            res.push_back(data[i][j]);
//        }
//    }
//
//    for(int i=0; i<res.size(); i++){
//           for(int j=0; j<res.size(); j++){
//               cout<<res[i]<<res[j]<<",";
//         }
//    }    //организовать цикл for по всем вариантам
//
//
//
//}
