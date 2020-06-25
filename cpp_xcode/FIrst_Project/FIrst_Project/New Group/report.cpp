////
////  report.cpp
////  FIrst_Project
////
////  Created by Данил on 24/11/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <memory>
//using namespace std;
//class Report{
//    string str;
//public:
//    Report(string s) : str(s){
//        cout<<"object created"<<endl;
//    }
//    ~Report(){
//        cout<<"object deleted"<<endl;
//    }
//    void comment() const{
//        cout<<str<<endl;
//    }
//};
//int main(){
//    {
//        auto_ptr<Report> ps(new Report("using auto_ptr"));
//        ps->comment();;
//    }
//    {
//        shared_ptr<Report> ps(new Report("using share_ptr"));
//        ps->comment();;
//    }
//    {
//        unique_ptr<Report> ps(new Report("using unique_ptr"));
//        ps->comment();;
//    }
//    
//    //shared_ptr<double> pd;
//    //double * p_reg = new double;
//    //pd<double>(p_reg);
//    //pd = shared_ptr<double>(p_reg);
//    //shared_ptr<double> pshared(p_reg);//допустимо
//    //Report r = "sdfds";
//    //r = "dsfds";
//    //r("fsfsfsdf");
//    // *ps,
//    {
//       // string vacation("Так делать нельзя");
//       // shared_ptr<string> pvac(&vacation);
//    }
//    auto_ptr<string> ps(new string("hello"));
//    auto_ptr<string> wc;
//    wc = ps;
//    
//    unique_ptr<string> films[5] ={
//        unique_ptr<string>(new string("Fowl Balls")),
//        unique_ptr<string>(new string("Duck Balls")),
//        unique_ptr<string>(new string("Chicken Runs")),
//        unique_ptr<string>(new string("Turkey Error")),
//        unique_ptr<string>(new string("Goose Eggs")),
//    };
//    
//    shared_ptr<string> pwin;
//    //pwin = films[2]; // films[2] утрачиват права владения
//    //for(int i = 0; i < 5; i++){
//     //   cout<<*films[i]<<endl;
//    //}
//    cout<<"The winner is"<<*pwin<<"!\n";
//    cin.get();
//    
//    auto_ptr<string> p1(new string("auto"));
//    auto_ptr<string> p2;
//    p2 = p1;
////
//    unique_ptr<string> p3(new string("auto"));
//    unique_ptr<string> p4;
//    p4 = p3;
//    
//}
