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
//static int sizeOfAWord;
//int priority(char a){
//    long b = a;
//    if(b >= 65 && b <= 91){
//        return a == 'A'? 26:a == 'B'? 25:a == 'C'? 24:a == 'D'? 23:a == 'E'? 22:a == 'F'? 21:a == 'G'? 20:a == 'H'? 19:a == 'I'? 18:a == 'J'? 17:a == 'K'? 16:a == 'L'? 15:a == 'M'? 14:a == 'N'? 13:a == 'O'? 12:a == 'P'? 11:a == 'Q'? 10:a == 'R'? 9:a == 'S'? 8:a == 'T'? 7:a == 'U'? 6:a == 'V'? 5:a == 'W'? 4:a == 'X'? 3:a == 'Y'? 2:a == 'Z'? 1:0;
//    }else{
//        return a == 'a'? 26:a == 'b'? 25:a == 'c'? 24:a == 'd'? 23:a == 'e'? 22:a == 'f'? 21:a == 'g'? 20:a == 'h'? 19:a == 'i'? 18:a == 'j'? 17:a == 'k'? 16:a == 'l'? 15:a == 'm'? 14:a == 'n'? 13:a == 'o'? 12:a == 'p'? 11:a == 'q'? 10:a == 'r'? 9:a == 's'? 8:a == 't'? 7:a == 'u'? 6:a == 'v'? 5:a == 'w'? 4:a == 'x'? 3:a == 'y'? 2:a == 'z'? 1:0;
//    }
//
//}
//vector<string> retAnagramm(vector<string> anagramm);
//void deleteSomeElements(vector<string> &arrayforDelete, vector<string> &elementswhatNeedToDelete);
//vector<string> findBiggestAnagramm(vector<string> anagrammn);
//vector<string> fullOff();
//bool ifAnnagram(string a, string b);
//int checkPair(vector<string> anagrammn);
//int main(){
//    vector<string> rightAnaragmm = fullOff();
//    for(int i=0; i<rightAnaragmm.size(); i++){
//        cout<<rightAnaragmm[i]<<endl;
//    }
//    cout<<endl;
//    rightAnaragmm = findBiggestAnagramm(rightAnaragmm);
//    for(int i=0; i<rightAnaragmm.size(); i++){
//        cout<<rightAnaragmm[i]<<endl;
//    }
//
//
//    //find annagram 1
//    // find biggest anagaramm 1
//    //100 % ready
//    //100 % working
//}
//
//vector<string> retAnagramm(vector<string> anagramm){
//    string a,b;
//    vector<string> timeAnnagram;
//    a = anagramm.front();
//    if(anagramm.size() != 1){
//        anagramm.erase(anagramm.begin());
//        timeAnnagram.push_back(a);
//    }else{
//        timeAnnagram.push_back(a);
//        return timeAnnagram;
//    }
//
//    while(true){
//            b = anagramm.front();
//            anagramm.erase(anagramm.begin());
//        if(ifAnnagram(a, b)){
//            timeAnnagram.push_back(b);
//        }
//        if(anagramm.empty()){
//            break;
//        }
//    }
//    return timeAnnagram;
//}
//void deleteSomeElements(vector<string> & arrayforDelete, vector<string> & elementswhatNeedToDelete){
//    vector<string> Swap;
//    string a,b;
//    a = elementswhatNeedToDelete.front();
//    while(! arrayforDelete.empty()){
//        b = arrayforDelete.front();
//        if(ifAnnagram(a, b)){
//            arrayforDelete.erase(arrayforDelete.begin());
//        }else{
//            Swap.push_back(b);
//            arrayforDelete.erase(arrayforDelete.begin());
//        }
//    }
//    long n = Swap.size();
//    for(int i=0; i<n; i++){
//        string q;
//        q = Swap.front();
//        Swap.erase(Swap.begin());
//        arrayforDelete.push_back(q);
//    }
//}
//vector<string> findBiggestAnagramm(vector<string> anagrammn){
//    int target = 0;
//    vector<string> anagrammn1 = anagrammn;
//    while(!anagrammn1.empty()){
//        vector<string> timeAnn2 = retAnagramm(anagrammn1);
//        deleteSomeElements(anagrammn1, timeAnn2);
//        target++;
//    }
//     anagrammn1 = anagrammn;
//    vector<string> rightAnagramm;
//    long n = anagrammn.size();
//    while(rightAnagramm.size() != n){
//    if(anagrammn1.empty()){
//        anagrammn1 = anagrammn;
//    }
//    if(anagrammn.size() == 1){
//        for(int i=0; i<anagrammn.size(); i++){
//            rightAnagramm.push_back(anagrammn[i]);
//        }
//        break;
//    }
//
//    vector<string> timeAnn = retAnagramm(anagrammn1);
//    deleteSomeElements(anagrammn1, timeAnn);
//    string a = timeAnn[0];
//    int sum = 0;
//     int flag = 0;
//    for(int i=0 ; i<sizeOfAWord; i++){
//        sum+=priority(a[i]);
//    }
//
//    vector<string> annagramm3 = anagrammn;
//    deleteSomeElements(annagramm3, timeAnn);
//    vector<string> ann = annagramm3;
//        while(true){
//
//        int sum2 = 0;
//         vector<string> timeAnn2 = retAnagramm(ann);
//            target = checkPair(anagrammn) - 1;
//          deleteSomeElements(ann, timeAnn2);
//            string b = timeAnn2[0];
//        for(int i=0 ; i<sizeOfAWord; i++){
//            sum2+=priority(b[i]);
//        }
//
//        if(sum > sum2){
//            flag++;
//        }else{
//            break;
//        }
//        if(flag == target ||  2 == checkPair(anagrammn)){
//            for(int i=0; i<timeAnn.size(); i++){
//                rightAnagramm.push_back(timeAnn[i]);
//            }
//
//            deleteSomeElements(anagrammn, timeAnn);
//            int k = checkPair(anagrammn);
//            if(k == 1){
//                for(int i=0; i<timeAnn2.size(); i++){
//                    rightAnagramm.push_back(timeAnn2[i]);
//                }
//            }
//
//            break;
//        }
//    }
//    }
//    return rightAnagramm;
//}
//
//vector<string> fullOff(){
//    vector<string> anagramm;
//    vector<string> massiveOfmassive;/*[] = {"eat","ate","ttt","taa","nat","aat","bat","ate","aet","ata","efr"};*/
//    string b;
//    while(b != "."){
//        cout<<"enter b:";
//        cin>>b;
//        if(b != "."){
//            massiveOfmassive.push_back(b);
//        }
//    }
//    string a = massiveOfmassive[0];
//    for(int i=0; a[i]; i++){
//        sizeOfAWord++;
//    }
//    for(int i=0; i<massiveOfmassive.size(); i++){
//        anagramm.push_back(massiveOfmassive[i]);
//    }
//    vector<string> rightAnagramm;
//    while(!anagramm.empty()){
//        vector<string>anagrammn = retAnagramm(anagramm);
//         for(long i=0; i<anagrammn.size(); i++){
//            rightAnagramm.push_back(anagrammn[i]);
//         }
//        deleteSomeElements(anagramm, anagrammn);
//
//    }
//    return rightAnagramm;
//}
//int checkPair(vector<string> anagrammn){
//    int target = 0;
//    vector<string> anagrammn1 = anagrammn;
//    while(!anagrammn1.empty()){
//        vector<string> timeAnn2 = retAnagramm(anagrammn1);
//        deleteSomeElements(anagrammn1, timeAnn2);
//        target++;
//    }
//    return target;
//}
//bool ifAnnagram(string a, string b){
//    if(a == b){
//        return true;
//    }else{
//        int h = 0;
//        int sum = 0;
//        int sum2 = 0;
//        for(int i=0; i<sizeOfAWord; i++){
//            for(int j=0; j<sizeOfAWord; j++){
//                if(priority(a[i]) == priority(b[j])){
//                    h++;
//                    break;
//                }
//            }
//        }
//        for(int i=0; i<sizeOfAWord; i++){
//            sum+=priority(a[i]);
//        }
//        for(int i=0; i<sizeOfAWord; i++){
//            sum2+=priority(b[i]);
//        }
//        if(sum == sum2 && h == sizeOfAWord){
//            return true;
//        }else{
//            return false;
//        }
//    }
//}
