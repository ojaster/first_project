//
//  high_scores.cpp
//  FIrst_Project
//
//  Created by Данил on 08/01/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

//#include <stdio.h>
//#include <iostream>
//#include <time.h>
//#include <algorithm>
//#include <stdlib.h>
//#include <vector>
//using namespace std;
//int main(){
//    vector<int>::const_iterator iter;
//    cout<<"Creating a list of scores"<<endl;
//    vector<int> scores;
//    scores.push_back(7500);
//    scores.push_back(1500);
//    scores.push_back(3500);
//    cout<<"high scores:"<<endl;
//    for(iter = scores.begin(); iter != scores.end(); iter++){
//        cout<<*iter<<endl;// получить значение, а не АДРЕС
//    }
//    cout<<"finding a score:"<<endl;
//    int score;
//    cout<<"enter a score to find:";
//    cin>>score;
//    iter = find(scores.begin(),scores.end(),score);
//    if(iter != scores.end()){
//        cout<<"score found"<<endl;
//    }else{
//        cout<<"score has not found"<<endl;
//    }
//    
//    cout<<"sorting scores"<<endl;
//    srand(static_cast<unsigned int>(time(0)));
//    random_shuffle(scores.begin(), scores.end());
//    
//    cout<<"high scores:"<<endl;
//    for(iter = scores.begin(); iter != scores.end(); iter++){
//        cout<<*iter<<endl;
//    }
//    cout<<"randomizing scores"<<endl;
//    sort(scores.begin(), scores.end());
//    cout<<"high scores:"<<endl;
//    for(iter = scores.begin(); iter != scores.end(); iter++){
//        cout<<*iter<<endl;
//    }
//    
//    string str = "HighScores";
//    sort(str.begin(),str.end());
//    cout<<str<<endl;
//}
