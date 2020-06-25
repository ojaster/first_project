//
//  zdaha.cpp
//  FIrst_Project
//
//  Created by Данил on 26/01/2020.
//  Copyright © 2020 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
//int sumDivisors(int num){
//    int sum = 0;
//    int i = 2;
//    while(i <= sqrt(num)) {//sqrt(num) //9
//        if(num % i == 0){
//            sum += (i == (num/i)) ? i : (i + num/i);
//        }
//        i++;
//    }
//    return sum + 1;
//}// 1 2 3
////  6 4
//void printAbundant(int limit){d
//    for(int i = 10; i < limit; i++){
//        int sum = sumDivisors(i);
//        if(sum > i){
//            cout<<"abundant : "<<sum - i<<endl;
//            cout<<"number : "<<i<<endl;
//        }
//    }
//}
//void armstrong(){
//    for(int i = 1; i < 10; i++){
//        for(int j = 0; j < 10; j++){
//            for(int k = 0; k < 10; k++){
//                int arm = i*i*i + j*j*j + k*k*k;
//                if((i*100) + (j * 10) + (k) == arm){
//                    cout<<arm<<endl;
//                }
//            }
//        }
//    }
//}
//int bingray(int bin){
//    return bin ^ (bin >> 1);
//}
pair<long long, long> longestCollatz(long long const);
int main(){
//    int num = 167;
// //   printAbundant(num);
// //   armstrong();
//  cout<<(num - num%1000)/1000<<endl;
//    int bin = 2;
//  //  cout<<grayencode(bin)<<endl;
////    cout<<(4^5)<<endl;
//    int num = 0;
//    int counter = 0;
//    for(int i = 0; i < 1000; i++){
//        num = i+1;
//        while(num != 1){
//            if(num%2 == 0){
//                num = num / 2;
//            }else{
//                num = num * 3;
//                num += 1;
//            }
//            counter++;
//        }
//        cout<<i+1<<" = "<<counter<<endl;
//        counter = 0;
//    }
//
 //  longestCollatz(100);
}


pair<long long, long> longestCollatz(long long const limit){
   long length = 0;
   long long number = 0;
   vector<int> cache(limit + 1, 0);
   
   for(long long i = 2; i <= limit; i++){
       auto n = i;
       long counter = 0;
       while(n!=1 && n>=i){
           if((n%2)==0){
               n=n/2;
           }else{
               n = n * 3 + 1;
           }
           counter++;
       }
       
       cache[i] = counter + cache[n];
       if(cache[i] > length){
           length = cache[i];
           number = i;
       }
   }
   
   return make_pair(number, length);
}

