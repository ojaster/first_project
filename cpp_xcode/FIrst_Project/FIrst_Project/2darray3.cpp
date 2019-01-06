////
////  2darray3.cpp
////  FIrst_Project
////
////  Created by Данил on 24.08.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main(){
//    int **a;
//    int **b;
//    int n;
//    cin>>n;
//    a=new int*[n];
//    for(int i=0;i<n; i++){
//        a[i]=new int [n];
//    }
//    
//    
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            a[i][j]=rand()%(10-1)+2;// (9-2)   (a,b)       rand()%(b+1-a)+a
//            cout<<a[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    int sum=0, minSum = 99999, indexRow=-1;
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n;j++){
//            sum+=a[i][j];
//            
//        }
//        if(sum<minSum){
//            minSum=sum;
//            indexRow = i;
//        }
//        sum = 0;
//    }
//        cout<<minSum<<endl;
//    cout<<indexRow<<endl;
//
//
//    b=new int*[n];
//    for(int i=0;i<n; i++){
//        b[i]=new int [n];
//    }
//    
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            b[i][j]=a[i][j] - minSum;
//            cout<<b[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    
//    
//    for(int i=0; i<n; i++){
//        delete b[i];
//    }
//    delete b;
//    for(int i=0; i<n; i++){
//        delete a[i];
//    }
//    delete a;
//}

