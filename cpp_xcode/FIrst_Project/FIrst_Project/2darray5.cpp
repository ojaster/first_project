////
////  2darray5.cpp
////  FIrst_Project
////
////  Created by Данил on 25.08.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//int main(){
//    double **a;
//    int n;
//    cin>>n;
//    a=new double*[n];
//    for(int i=0; i<n; i++){
//        a[i]=new double[n];
//    }
//    int left=-5;
//    int right=5;
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            a[i][j]=rand()%(right+1-left)+left;
//            cout<<a[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    double sum=0.0;
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            sum+=a[i][j];
//        }
//        double av = sum/(double) n;
//        cout<<"#"<<av<<" @ "<<sum<<endl;
//        for(int j=0; j<n; j++){
//            if(j%2==0){
//                a[i][j]=a[i][j]+av;
//            }
//        }
//        sum=0;
//    }
//    
//    
//    
//    
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            cout<<a[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    
//    
//    for(int i=0; i<n; i++){
//        delete a[i];
//    }
//    delete a;
//    
//}

