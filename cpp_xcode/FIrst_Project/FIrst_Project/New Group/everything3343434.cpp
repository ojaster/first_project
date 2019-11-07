////
////  everything3343434.cpp
////  FIrst_Project
////
////  Created by Данил on 28/09/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <set>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//class Input{
//        int y;
//        string name;
//        int x;
//    public:
//        Input(int y, int x, string name){
//            this->y = y;
//            this->x = x;
//            this->name = name;
//        }
//        int getY(){
//            return y;
//        }
//        int getX(){
//            return x;
//        }
//        string getName(){
//            return name;
//        }
//};
//
//vector<Input> getData(){
//    int a, b = 0, q;
//    string name;
//    vector<Input> results;
//    cin>>q;
//    for(int i=0; i<q; i++){
//       cin>>a;
//       cin>>name;
//        if(a == 1){
//            cin>>b;
//        }else{
//            b = 0;
//        }
//       Input inp(a,b, name);
//       results.push_back(inp);
//    }
//    return results;
//}
//
//int main() {
//    vector<Input> inputs = getData();
//    map<string,int> sets;
//    map<string, int>::iterator it = sets.begin();
//    for(int i = 0; i < inputs.size(); i++){
//        int sum = 0;
//        switch(inputs[i].getY()) {
//                case 1:
//                    it = sets.find(inputs[i].getName());
//                    if(it != sets.end()){
//                        sum = it->second;//оценка
//                        sum += inputs[i].getX();
//                        sets[inputs[i].getName()] = sum;
//                    }else{
//                        sum = inputs[i].getX();
//                        sets.insert({inputs[i].getName(), sum});
//                    }
//                    break;
//                case 2:
//                     sets.erase(inputs[i].getName());
//                     break;
//                case 3:
//                      it = sets.find(inputs[i].getName());
//                      if(it!=sets.end()){
//                        cout<<it->second<<endl;
//                      }else{
//                           cout<<0<<endl;
//                      }
//                      break;
//        }
//   }
//}
//
//
//
//
//
//
//
//
