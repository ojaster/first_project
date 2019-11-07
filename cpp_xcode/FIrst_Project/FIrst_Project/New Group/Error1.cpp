////
////  Error1.cpp
////  FIrst_Project
////
////  Created by Данил on 12/10/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <cfloat>
//#include <math.h>
//#include <malloc/_malloc.h>
//using namespace std;
///**void error(string code){
//    cout<<code<<endl;
//}*/
//
//class BadHmean{
//    double v1,v2;
//public:
//    BadHmean(int v = 0,int w = 0):v1(v),v2(w){}
//    void mesg();
//    
//};
//class BadGmean{
//    double v1,v2;
//public:
//    BadGmean(int v = 0,int w = 0):v1(v),v2(w){}
//    const char * mesg();
//};
//
//inline void BadHmean::mesg(){
//    cout<<"hMean("<<v1<<","<<v2<<")"<<endl;
//    cout<<"invalib arguments"<<endl;
//}
//const char * BadGmean::mesg(){
//    return "GMean atguments should be bigger or equal 0";
//}
//double hmean(double a, double b){
//    if(a == -b){
//        throw BadHmean(a, b);
//    }
//   return 2.0 * a * b / ( a + b );
//}
//
//double gmean(double a, double b){
//    if(a <0 || b < 0){
//        throw BadGmean(a, b);
//    }
//   return sqrt(a * b);
//}
//
//int main() {
//    double z = 0, x, y;
//    while(cin>>x>>y) {
//    try {
//        cout<<"hmean:"<<endl;
//           z = hmean(x, y);
//           cout<<"hmean="<<z<<endl;
//           cout<<"gmean:"<<endl;
//           z = gmean(x, y);
//           cout<<"gmean="<<z<<endl;
//        }catch(BadGmean & ex) {
//           ex.mesg();
//           cout<<"Try again"<<endl;
//           continue;
//       }catch(BadHmean & exeption){
//           exeption.mesg();
//           cout<<"sorry, the end"<<endl;
//           break;
//       }
//    }
//    cout<<"Bye!"<<endl;
//}
//
////void char c =  get(); while (c!= EOF) { c = get(); }
