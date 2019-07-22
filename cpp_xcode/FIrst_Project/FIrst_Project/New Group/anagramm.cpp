//
//  anagrammmm.cpp
//  FIrst_Project
//
//  Created by Данил on 20/07/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
static int sizeOfAWord;
int priority(char a){
    return a == 'a'? 10:a == 'b'? 9:a == 'c'? 8:a == 'd'? 7:a == 'e'? 6:a == 'f'? 5:a == 'g'? 4:a == 'n'? 3:a == 't'? 2:0;
}
vector<string> retAnagramm(vector<string> anagramm);
void deleteSomeElements(vector<string> &arrayforDelete, vector<string> &elementswhatNeedToDelete);
vector<string> findBiggestAnagramm(vector<string> anagrammn);
vector<string> fullOff();
bool ifAnnagram(string a, string b);
int checkPair(vector<string> anagrammn);
int main(){
    vector<string> rightAnaragmm = fullOff();
    for(int i=0; i<rightAnaragmm.size(); i++){
        cout<<rightAnaragmm[i]<<endl;
    }
    cout<<endl;
    rightAnaragmm = findBiggestAnagramm(rightAnaragmm);
    for(int i=0; i<rightAnaragmm.size(); i++){
        cout<<rightAnaragmm[i]<<endl;
    }
    
    
    //find annagram 1
    // find biggest anagaramm 1
    //100 % ready
    //100 % working
}

vector<string> retAnagramm(vector<string> anagramm){
    string a,b;
    vector<string> timeAnnagram;
    a = anagramm.front();
    if(anagramm.size() != 1){
        anagramm.erase(anagramm.begin());
        timeAnnagram.push_back(a);
    }else{
        timeAnnagram.push_back(a);
        return timeAnnagram;
    }

    while(true){
            b = anagramm.front();
            anagramm.erase(anagramm.begin());
        if(ifAnnagram(a, b)){
            timeAnnagram.push_back(b);
        }
        if(anagramm.empty()){
            break;
        }
    }
    return timeAnnagram;
}
void deleteSomeElements(vector<string> & arrayforDelete, vector<string> & elementswhatNeedToDelete){
    vector<string> Swap;
    string a,b;
    a = elementswhatNeedToDelete.front();
    while(! arrayforDelete.empty()){
        b = arrayforDelete.front();
        if(ifAnnagram(a, b)){
            arrayforDelete.erase(arrayforDelete.begin());
        }else{
            Swap.push_back(b);
            arrayforDelete.erase(arrayforDelete.begin());
        }
    }
    long n = Swap.size();
    for(int i=0; i<n; i++){
        string q;
        q = Swap.front();
        Swap.erase(Swap.begin());
        arrayforDelete.push_back(q);
    }
}
vector<string> findBiggestAnagramm(vector<string> anagrammn){
    int target = 0;
    vector<string> anagrammn1 = anagrammn;
    while(!anagrammn1.empty()){
        vector<string> timeAnn2 = retAnagramm(anagrammn1);
        deleteSomeElements(anagrammn1, timeAnn2);
        target++;
    }
     anagrammn1 = anagrammn;
    vector<string> rightAnagramm;
    long n = anagrammn.size();
    while(rightAnagramm.size() != n){
    if(anagrammn1.empty()){
        anagrammn1 = anagrammn;
    }
    if(anagrammn.size() == 1){
        for(int i=0; i<anagrammn.size(); i++){
            rightAnagramm.push_back(anagrammn[i]);
        }
        break;
    }
        
    vector<string> timeAnn = retAnagramm(anagrammn1);
    deleteSomeElements(anagrammn1, timeAnn);
    string a = timeAnn[0];
    int sum = 0;
     int flag = 0;
    for(int i=0 ; i<sizeOfAWord; i++){
        sum+=priority(a[i]);
    }

    vector<string> annagramm3 = anagrammn;
    deleteSomeElements(annagramm3, timeAnn);
    vector<string> ann = annagramm3;
        while(true){
        
        int sum2 = 0;
         vector<string> timeAnn2 = retAnagramm(ann);
            target = checkPair(anagrammn) - 1;
          deleteSomeElements(ann, timeAnn2);
            string b = timeAnn2[0];
        for(int i=0 ; i<sizeOfAWord; i++){
            sum2+=priority(b[i]);
        }
       
        if(sum > sum2){
            flag++;
        }else{
            break;
        }
        if(flag == target ||  2 == checkPair(anagrammn)){
            for(int i=0; i<timeAnn.size(); i++){
                rightAnagramm.push_back(timeAnn[i]);
            }
            
            deleteSomeElements(anagrammn, timeAnn);
            int k = checkPair(anagrammn);
            if(k == 1){
                for(int i=0; i<timeAnn2.size(); i++){
                    rightAnagramm.push_back(timeAnn2[i]);
                }
            }
            
            break;
        }
    }
    }
    return rightAnagramm;
}

vector<string> fullOff(){
    vector<string> anagramm;
    string massiveOfmassive[] = {"eattt","attet","ttttt","taatt","nattt","aatat","battt","attet","aatat","ataat"};
    string a = massiveOfmassive[0];
    for(int i=0; a[i]; i++){
        sizeOfAWord++;
    }
    for(int i=0; i<10; i++){
        anagramm.push_back(massiveOfmassive[i]);
    }
    vector<string> rightAnagramm;
    while(!anagramm.empty()){
        vector<string>anagrammn = retAnagramm(anagramm);
         for(long i=0; i<anagrammn.size(); i++){
            rightAnagramm.push_back(anagrammn[i]);
         }
        deleteSomeElements(anagramm, anagrammn);
       
    }
    return rightAnagramm;
}
int checkPair(vector<string> anagrammn){
    int target = 0;
    vector<string> anagrammn1 = anagrammn;
    while(!anagrammn1.empty()){
        vector<string> timeAnn2 = retAnagramm(anagrammn1);
        deleteSomeElements(anagrammn1, timeAnn2);
        target++;
    }
    return target;
}
bool ifAnnagram(string a, string b){
    if(a == b){
        return true;
    }else{
        int h = 0;
        int sum = 0;
        int sum2 = 0;
        for(int i=0; i<sizeOfAWord; i++){
            for(int j=0; j<sizeOfAWord; j++){
                if(priority(a[i]) == priority(b[j])){
                    h++;
                    break;
                }
            }
        }
        for(int i=0; i<sizeOfAWord; i++){
            sum+=priority(a[i]);
        }
        for(int i=0; i<sizeOfAWord; i++){
            sum2+=priority(b[i]);
        }
        if(sum == sum2 && h == sizeOfAWord){
            return true;
        }else{
            return false;
        }
    }
}
