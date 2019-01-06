//
//  drop.cpp
//  FIrst_Project
//
//  Created by Данил on 14.11.18.
//  Copyright © 2018 Daniil. All rights reserved.
//
//
//#include <iostream>
//using namespace std;
//const int n=2;
//class Drop{
//private:
//    int drop1[n];
//    int drop2[n];
//    int sum=0;
//    int sum1=0;
//    int help1=0;
//    int help2=0;
//    int minus=0;
//public:
//    void intputDrop(){
//        for(int i=0; i<n; i++){
//            cin>>drop1[i];
//            cin>>drop2[i];
//        }
//        cout<<drop1[0]<<"/"<<drop1[1]<<endl;
//        cout<<drop2[0]<<"/"<<drop2[1]<<endl;
//    }
//    void Sum(){
//        for(int i =0; i<n; i++){
//            if(drop1[1]!=drop2[1]){
//            help1=drop2[1];
//            help2=drop1[1];
//            drop1[i] = help1 * drop1[i];
//            drop2[i] = help2 * drop2[i];
//            }
//            minus=drop1[0] - drop2[0];
//            sum1=drop1[0]+drop2[0];
//        }
//        cout<<drop1[0]<<"/"<<drop1[1]<<endl;
//        cout<<drop2[0]<<"/"<<drop2[1]<<endl;
//    }
//    void Cout(){
//        cout<<"sum of drop1, drop2"<<endl;
//       cout<<sum1<<"/"<<drop1[1]<<endl;
//        cout<<"minus of drop1, drop2"<<endl;
//        cout<<minus<<"/"<<drop1[1]<<endl;
//    }
//};
//int main(){
//    Drop s1;
//    s1.intputDrop();
//    s1.Sum();
//    s1.Cout();
//}


