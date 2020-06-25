////
////  g].cpp
////  FIrst_Project
////
////  Created by Данил on 16.5.2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//
//#include <stdio.h>
//#include <iostream>
//#include <unordered_set>
//#include <unordered_map>
//#include <sys/types.h>
//#include <unistd.h>
//#include <pwd.h>
//using namespace std;
//int a = 4;
//
//uid_t getuid();
//uid_t geteuid();
//uid_t getgid();
//uid_t getegid();
//
//int  setuid(uid_t uid);
//int seteuid(uid_t uid);
//int setgid(uid_t uid);
//int setegid(uid_t uid);
//
//struct passwd * getpas(const char * name){
//    struct passwd * pw;
//    char logname[100];
//    char *arg[20];
//    char *envir[30];
//    
//    pw = getpwnam(name);
//    //
//    if(pw == 0) {
//     //   retry();
//    }else{
//        setuid(pw->pw_uid);
//        setgid(pw->pw_gid);
//        execev(pw->pw_shell, arg, envir);
//    }
//    //login:
//    
//}
//
//
//
//
//int main(){
//    
//    
////    int a = 2; int b = 3;
////    //0000000000000000000000000000000
////    int res;
////    int carry = 0;
////    do{
////        res = (a xor b) xor carry;
////        carry = (a xor b) & carry | (a & b);
////    }while(carry != 0);
//  //  cout<<res<<endl;
//    
////    carry = a & b;
////    a = a ^ b;
////    b = carry << 1;
//    
//    
//    
////    unordered_map<int,int> a;
////    int massive[] = {4,2,2,1,2,3,2,3,0};
////    int unique;
////    for(int i = 0; massive[i]; i++){
////        if(a.find(massive[i]) == a.end()){
////            a.insert({massive[i],0});
////        }else{
////            a.at(massive[i])++;
////        }
////        cout<<massive[i]<<endl;
////    }
////    for(int i =0; massive[i]!= 0; i++){
////        if(a.at(massive[i]) == 0){
////            unique = massive[i];
////            break;
////        }
////    }
////    cout<<unique<<endl;
//    
//}
