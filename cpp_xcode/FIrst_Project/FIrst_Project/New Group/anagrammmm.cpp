////
////  anagrammmm.cpp
////  FIrst_Project
////
////  Created by Данил on 20/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <iostream>
//using namespace std;
//int priority(char a){
//    return a == 'a'? 10:a == 'b'? 9:a == 'c'? 8:a == 'd'? 7:a == 'e'? 6:a == 'f'? 5:a == 'g'? 4:a == 'n'? 3:a == 't'? 2:0;
//}
//vector<char> retAnagramm(vector<char> anagramm);
//void deleteSomeElements(vector<char> &arrayforDelete, vector<char> &elementswhatNeedToDelete);
//vector<char> findBiggestAnagramm(vector<char> anagrammn, vector<char> anagrammn2);
//vector<char> fullOff();
//int main(){
//    vector<char> rightAnaragmm = fullOff();
//    for(int i=0; i<rightAnaragmm.size(); i++){
//        cout<<rightAnaragmm[i]<<endl;
//    }
//    //find annagram 0.5
//    // find biggest anagaramm 1
//    
//}
//
//vector<char> retAnagramm(vector<char> anagramm){
//    int h = 0;
//    char a[3],b[3],save[3];
//    int secondTest = 0;
//    int d = 0;
//    vector<char> timeAnnagram;
//    
//    for(int i=0; i<3; i++){
//        a[i] = anagramm[i];
//    }
//    for(int i=0; i<3; i++){
//        anagramm.erase(anagramm.begin());
//    }
//    for(int i=0; i<3; i++){
//        timeAnnagram.push_back(a[i]);
//    }
//    d = 1;
//    while(true){
//        h = 0;
//        for(int j=0; j<3; j++){
//             b[j] = anagramm[j];
//        }
//        for(int i = 0; i<3; i++){
//            int u = i+1;
//            if(u>3){
//                u = 0;
//            }
//            if(a[i] == a[u] ){
//                secondTest++;
//            }
//        }
//        for(int i=0; i<3; i++){
//            for(int j=0; j<3; j++){
//                if(priority(a[i]) == priority(b[j])){
//                    h++;
//                    break;
//                }
//            }
//        }
//        if(h == 3 && secondTest == 0){
//            if(d!=1){
//                for(int i=0; i<3; i++){
//                    timeAnnagram.push_back(b[i]);
//                }
//            }
//            d = 0;
//        }else if(h == 4){
//            if(d!=1){
//                for(int i=0; i<3; i++){
//                    timeAnnagram.push_back(b[i]);
//                }
//            }
//            d = 0;
//            secondTest = 0;
//        }
//        if(anagramm.empty()){
//            break;
//        }
//        for(int i=0; i<3; i++){
//            anagramm.erase(anagramm.begin());
//        }
//        if(anagramm.size() == 3){
//            cout<<endl;
//        }
//        if(anagramm.empty()){
//            break;
//        }
//    }
//    return timeAnnagram;
//}
//void deleteSomeElements(vector<char> & arrayforDelete, vector<char> & elementswhatNeedToDelete){
//    vector<char> Swap;
//    for(int i = elementswhatNeedToDelete.size(); i<arrayforDelete.size(); i++){
//        Swap.push_back(arrayforDelete[i]);
//    }
//    for(int i=0; i<elementswhatNeedToDelete.size(); i++){
//        arrayforDelete.pop_back();
//    }
//    for(int i=0; i<Swap.size(); i++){
//        arrayforDelete[i] = Swap[i];
//    }
//}
//vector<char> findBiggestAnagramm(vector<char> anagrammn, vector<char> anagrammn2){
//    vector<char> rightAnagramm;
//    char a[3];
//    char b[3];
//    for(int i=0; i<3; i++){
//        a[i] = anagrammn[i];
//    }
//    for(int i=0; i<3; i++){
//        b[i] = anagrammn2[i];
//    }
//    int sum = 0;
//    int sum2 =0;
//    for(int i=0 ; i<3; i++){
//        sum+=priority(a[i]);
//    }
//    for(int i=0 ; i<3; i++){
//        sum2+=priority(b[i]);
//    }
//    if(sum > sum2){
//        for(int i = 0; i<anagrammn.size(); i++){
//            rightAnagramm.push_back(anagrammn[i]);
//        }
//    }else{
//        for(int i = 0; i<anagrammn2.size(); i++){
//            rightAnagramm.push_back(anagrammn2[i]);
//        }
//    }
//    return rightAnagramm;
//}
//vector<char> fullOff(){
//    vector<char> anagramm;
//    char massiveOfmassive[] = {'e','a','t','a','t','e','t','t','e','a','t','t','n','a','t','t','e','n','b','a','t','a','t','e'};
//    for(int i=0; i<strlen(massiveOfmassive)-1; i++){
//        anagramm.push_back(massiveOfmassive[i]);
//    }
//    vector<char> rightAnagramm;
//    while(!anagramm.empty()){
//        vector<char>anagrammn = retAnagramm(anagramm);
//        char *a = new char[anagrammn.size()+1];
//        for(int i=0; i<anagrammn.size()+1; i++){
//            a[i] = anagrammn[i];
//        }
//        a[anagrammn.size()+1] = '.';
//        for(int i=0; i<anagrammn.size()+1; i++){
//            rightAnagramm.push_back(a[i]);
//        }
//        delete [] a;
//        deleteSomeElements(anagramm, anagrammn);
//    }
//    return rightAnagramm;
//}
