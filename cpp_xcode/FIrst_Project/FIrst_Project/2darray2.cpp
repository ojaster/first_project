//
//  2darray2.cpp
//  FIrst_Project
//
//  Created by Данил on 24.08.18.
//  Copyright © 2018 Daniil. All rights reserved.
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
//            a[i][j]=rand()%(10-2)+2;// (9-2)   (a,b)       rand()%(b+1-a)+a
//            cout<<a[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    int sum=0, indexMax =-1, sumMax = 0;
//    for(int j=0; j<n; j++){
//        for(int i=0; i<n;i++){
//            if(a[i][j]%2==0){
//                sum+=a[i][j];
//            }
//        }
//        cout<<sum<<endl;
//        if(sum>sumMax){
//            sumMax = sum;
//            indexMax = j;
//        }
//        sum = 0;
//    }
//    b=new int*[n];
//    for(int i=0;i<n; i++){
//        b[i]=new int [n];
//    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            b[i][j]=a[i][j] - sumMax;
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
//    cout<<indexMax<<endl;
//}

