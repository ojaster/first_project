////
////  engobj.cpp
////  FIrst_Project
////
////  Created by Данил on 06.10.18.
//////  Copyright © 2018 Daniil. All rights reserved.
//////
//
//#include <iostream>
//using namespace std;
//class Distance{ //класс - пользовательский тип данных
//private:
//    float inches;
//    int feet;
//public:
//    //конструктор без парметров
//    Distance(): feet(0), inches(0.0){
//    }
//    //конструктор с двумя аргументами
//    Distance(int ft, float in): feet(ft), inches(in){
//        
//    }
//    //Конструктор копирования
//
//    void getDist(){
//        cout<<"input feet:";
//        cin>>feet;
//        cout<<"input inches:";
//        cin>>inches;
//    }
//    void showDist() const{
//        cout<<feet<<endl;
//        cout<<inches<<endl;
//    }
//    Distance add_dist(Distance) const; //прототип
//};
//
////разрешение доступа
//Distance Distance::add_dist(Distance d2) const{
//    Distance temp;
//    temp.inches = this->inches + d2.inches;
//    while(temp.inches>12.0){
//        temp.inches -=12.0;
//        temp.feet += 1;
//    }
//    temp.feet+=this->feet + d2.feet;
//    return temp;
//}
//
//int main(){
//    Distance d1,d3;
//    Distance d2(11,6.25);
//    d1.getDist();
//    
//    d3 = d1.add_dist(d2);//d3=temp
//    d3.showDist();
//    
//    
//}
