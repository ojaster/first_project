////
////  email.cpp
////  FIrst_Project
////
////  Created by Данил on 26/12/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <map>
//#include <vector>
//#include <unordered_set>
//using namespace std;
//int index(int num, int size){
//    return num % size;
//}
////int numUniqueEmails(vector<string>& emails) {
////    map<int, string> a;
////    for(int i = 0; i < emails.size(); i++){
////        a.insert(pair<int,string>(i,emails[i]));
////    }
////    return a.size();
////}
//class Solution {
//    using Emails = vector<string>;
//    using Uniqie = unordered_set<string>;
//public:
//    int numUniqueEmails(Emails & emails, Uniqie unique = {}) {
//        for(auto & e: emails) {
//            auto pivot = e.find_first_of('@'); // n
//            auto name = e.substr(0, pivot), // n
//            domain = e.substr(pivot); // n
//            name.erase(remove(name.begin(), name.end(), '.'), name.end()); // 2*n
//            auto pos = name.find_first_of('+'); // n
//            unique.insert((pos!=string::npos) ? name.erase(pos) + domain : name + domain); //
//        }
//        return static_cast<int>(unique.size());
//    }
//};
//
//int main(){
//    string testCase[] = {"fz.k+h.vulyve@ownxv.fvxas.com","fz.k+g+f.ni.op.c@ownxv.fvxas.com","fz.k+hbdezld@ownxv.fvxas.com","h+hkhtc+c.dun@r.oy.com","fz.k+z.nben.hw@ownxv.fvxas.com","fz.k+et.ef+owb@ownxv.fvxas.com"};
//    
//    vector<string> emails;
//    for(int i = 0; i < 6; i++){
//        emails.push_back(testCase[i]);
//    }
//
//
//    string str;
//    int massive[emails.size()];
//    memset( massive, 0, emails.size()*sizeof(int) );
//    int num = 0;
//    int res = 0;
//    bool a = false;
//    for(int j = 0; j < emails.size(); j++){
//        str = emails[j];
//    for(int i = 0; i < str.size(); i++){
//        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] == '.' && a == true) || (str[i] >= '0' && str[i] <= '9')){
//            num += str[i];
//            cout<<str[i];
//        }else if(str[i] == '+'){
//            while(str[i] != '@'){
//                i++;
//            }
//            num += str[i];
//            a = true;
//            cout<<str[i];
//        }
//    }
//        cout<<endl;
//        cout<<"index: "<<num % emails.size()<<endl;
//        cout<<"key: "<<num<<endl;
//        if(massive[index(num, emails.size())] == num ){
//                num = 0;
//            cout<<"declined"<<endl;
//            }else{
//                massive[index(num, emails.size())] = num;
//                cout<<"accepted"<<endl;
//                num = 0;
//                res++;
//            }
//            a = false;
//        cout<<"_________"<<endl;
//    }
//    cout<<res<<endl;
//    
//    
//    
//    
//    
//    
////    string str = "test.email+alex@leetcode.com,test.e.mail+bob.cathy@leetcode.com,testemail+david@lee.tcode.com";
////    int massive[4] = {0};
////    int num = 0;
////    int res = 0;
////    bool a = false;
////    for(int i = 0; i < str.size(); i++){
////        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] == '.' && a == true)){
////            cout<<str[i];
////            num += str[i];
////        }else if(str[i] == '+'){
////            while(str[i] != '@'){
////                i++;
////            }
////            num += str[i];
////            cout<<str[i];
////            a = true;
////        }else if(str[i] == ',' || str[i] == ']'){
////            cout<<"-------"<<endl;
////            if(massive[index(num, 4)] != 0){
////                num = 0;
////            }else{
////                massive[index(num, 4)]++;
////                num = 0;
////                res++;
////            }
////            a = false;
////        }
////    }
////    cout<<res<<endl;
//}
////#include <stdio.h>
////#include <iostream>
////#include <math.h>
////using namespace std;
////int index(int num,int size){
////    return num % size;
////}
////int main(){
////    string str = "[test.email+alex@leetcode.com,test.e.mail+bob.cathy@leetcode.com,testemail+david@lee.tcode.com]";
////    int massive[3] = {0};
////    int num = 0;
////    int res = 0;
////    for(int i = 0; i < str.size(); i++){
////        if(str[i] > 'a' && str[i] < 'z'){
////            num += str[i];
////        }else if(str[i] == '+'){
////            while(str[i] != '@'){
////                i++;
////            }
////        }else if(str[i] == ',' || str[i] == ']'){
////            cout<<massive[index(num,3)]<<endl;
////            cout<<index(num,3)<<endl;
////            if(massive[index(num,3)]!= 0){
////                num = 0;
////            }else{
////                massive[index(num,3)]++;
////                //num = 0;
////                res++;
////            }
////        }
////    }
////    cout<<res<<endl;
////}
