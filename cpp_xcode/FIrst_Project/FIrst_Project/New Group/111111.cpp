////
////  111111.cpp
////  FIrst_Project
////
////  Created by Данил on 17/11/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int factorial_S(int factorial){
//       if(!factorial){
//           return 1;
//       }
//        int temp = (factorial * factorial_S(factorial-1));
//        return temp;
//
//}
//void allCOmbinations(int (*massive)[2],vector<vector<int>>& pairs){
//    int size = pairs.size();
//    for(int i=0; i<size; i++){
//        for(int j = 0; j< 2; j++){
//           massive[i][j] = pairs[i][j];
//        }
//    }
//}
////class Solution{
////    public:
//   string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
//        int size = pairs.size();
//        int solSize = factorial_S(size)+1;
//        int massive[size][2];
//        allCOmbinations(massive,pairs);
//        string sol[solSize];
//        for(int i = 0; i<solSize; i++){
//            sol[i] = s;
//            char a = s[massive[i][0]];
//            s[massive[i][0]] = s[massive[i][1]];
//            s[massive[i][1]] = a;
//        }
//        //get two vector elem and with this algorithm swap
//        //char a = s[pairs[index]];
//        //s[pairs[index]] = s[pairs[secondIndex]];
//        //s[pairs[index]] = a;
//  
//        return sol[0];
//    }
////};
//int main(){
//    string s = "dcab";
//    vector<vector<int>> a;
//    int size = 3;
//    int c;
//    vector<int> temp;
//    for(int i = 0; i < size; i++){
//        for(int j = 0; j<2; j++){
//            cout<<"enter a num:";
//            cin>>c;
//            temp.push_back(c);
//            cout<<"added in vector temp"<<endl;
//        }
//
//        a.push_back(temp);
//        cout<<"added in vector a"<<endl;
//        temp.clear();
//        cout<<"temp cleared"<<endl;
//    }
////[[0,3],[1,2],[0,2]]
//
//    cout<<smallestStringWithSwaps(s, a)<<endl;
//}
////TRASH !!!!!!!!!!!!!!
////solution sol2 = sol[0];
////       for(int j = 0; j < s.size(); j++){
////           for(int i = 0; i < solSize; i++){
////               if(sol[i].is == true){
////                   if(sol[i].res[j] > sol2.res[j]){
////                       sol2 = sol[i];
////                       continue;
////                   }
////               }
////               sol[i].is = false;
////            }
////        }
