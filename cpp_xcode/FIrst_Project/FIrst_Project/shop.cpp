//
//  shop.cpp
//  FIrst_Project
//
//  Created by Данил on 11/01/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//class Goods{
//private:
//    int foodprice[10]{200,200,500,100,100,50,200,300,500,50 };
//    string madeDate[10]{"30.12.18","1.1.19","12.11.18","10.5.18","18.1.19","19.1.19","12.12.18","31.1.19","1.2.19","2.2.19"};
//    string food[10]{"milk","bread","kvas","MMMM","ananas","banana","chocoPOP","pringles","cocacola","fazegGeisha" };
//    int changesum=0;
//    int save;
//public:
//    void foodDisplay(){
//        for(int i=0; i<10; i++){
//            cout<<food[i];
//            cout<<" "<<endl;
//            cout<<foodprice[i];
//            cout<<" "<<endl;
//            cout<<madeDate[i];
//            cout<<" "<<endl;
//
//        }
//        cout<<endl;
//        cout<<"do you want to change a price 1 = yes 2 = no"<<endl;
//        cin>>changesum;
//        if(changesum==1){
//            whatKindOfFood();
//        }else{
//            foodDisplay();
//        }
//    }
//    void whatKindOfFood(){
//        cout<<"what food you want to change"<<endl;
//        for(int i=0 ; i<10; i++){
//            cout<<food[i]<<endl;
//            cout<<i+1<<endl;
//        }
//        cin>>changesum;
//        save=changesum;
//        toWhatPrice();
//    }
//    void toWhatPrice(){
//        cout<<"to what price you want change:"<<endl;
//        cin>>changesum;
//        switch(save){
//            case 1:
//                foodprice[0]=changesum;
//            case 2:
//                foodprice[1]=changesum;
//            case 3:
//                foodprice[2]=changesum;
//            case 4:
//                foodprice[3]=changesum;
//            case 5:
//                foodprice[4]=changesum;
//            case 6:
//                foodprice[5]=changesum;
//            case 7:
//                foodprice[6]=changesum;
//            case 8:
//                foodprice[7]=changesum;
//            case 9:
//                foodprice[8]=changesum;
//            case 10:
//                foodprice[9]=changesum;
//        }
//        foodDisplay();
//    }
//};
//int main(){
//    Goods market1;
//    market1.foodDisplay();
//}
