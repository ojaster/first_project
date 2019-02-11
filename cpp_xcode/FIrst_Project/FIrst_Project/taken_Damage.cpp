////
////  taken_Damage.cpp
////  FIrst_Project
////
////  Created by Данил on 02/02/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
////вызов функции - издержки производительности
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int radiation(int health);
//// аргумент
//// параметр
//
//int main(){
//    int health=80;//локальная переменная-определена в конкретной области видимости
//    
//
//    cout<<"your health is:"<<health<<endl;
//    health=radiation(health);
//    cout<<"After radiation exposure your health is :"<<health<<endl;
//    health=radiation(health); //health - аргумент ( передеаем при вызове)
//    cout<<"After radiation exposure your health is :"<<health<<endl;
//    health=radiation(health);
//    cout<<"After radiation exposure your health is :"<<health<<endl;
//}
//
////замещение вызова функции ее подстановкой
//// экономится ресурс, который пришлось бы потратить на вызов ункции, так как программе не приходится переключаться на другой участок нашего кода
//inline int radiation(int health){ //приказываем компилятору скопировать функцию непосредственно в вызывающий код
//    //health - парамтер
//    return (health/2);
//}
