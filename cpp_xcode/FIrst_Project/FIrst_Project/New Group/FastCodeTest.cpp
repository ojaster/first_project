////
////  FastCodeTest.cpp
////  FIrst_Project
////
////  Created by Данил on 20/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <iostream>
//#include <SFML/Graphics.hpp>
//#include <math.h>
//#include <vector>
//using namespace std;
////class Solution {
////public:
////    int thirdMax(vector<int>& nums) {
////        vector<int> temp;
////        for(int i=0; i<nums.size(); i++){
////            temp.push_back(nums[i]);
////        }
////        int max = 0;
////        int index = 0;
////        for(int i=0; i<nums.size(); i++){
////            if(nums[i] > max){
////                max = nums[i];
////                nums[i] = 0;
////                index = i;
////            }
////        }
////        temp[index] = 0;
////        for(int i=0; i<nums.size(); i++){
////            if(temp[i] != max){
////                nums[i] = temp[i];
////            }else if(temp[i] == max && index == i){
////                nums[i] = 0;
////            }
////        }
////        max = 0;
////        for(int i=0; i<nums.size(); i++){
////            if(nums[i] > max){
////                max = nums[i];
////                nums[i] = 0;
////                index = i;
////            }
////        }
////         temp[index] = 0;
////        for(int i=0; i<nums.size(); i++){
////            if(temp[i] != max){
////                nums[i] = temp[i];
////            }else if(temp[i] == max && index == i){
////                nums[i] = 0;
////            }
////        }
////        max = 0;
////        for(int i=0; i<nums.size(); i++){
////            if(nums[i] > max){
////                max = nums[i];
////                nums[i] = 0;
////            }
////        }
////        return max;
////
////    }
////};
//class Solution {
//public:
//    
//    int findRadius(vector<int>& houses, vector<int>& heaters) {
//        sort(heaters.begin(), heaters.end());
//        int r = 0;
//        for(int i = 0; i < houses.size(); i++){
//            r = max(r, minRadius(houses[i], heaters));
//        }
//        return r;
//    }
//    
//    int minRadius(int house, vector<int>& heaters){
//        int low = 0, high = heaters.size() - 1, minR = 2147483647;
//        while(low<=high){
//            int middle = low + (high-low) / 2;
//            if(heaters[middle] == house){
//                return 0;
//            }else if(heaters[middle] > house){
//                minR = min(minR, heaters[middle] - house);
//                high = middle - 1;
//            }else{
//                minR = min(minR, house - heaters[middle]);
//                low = middle + 1;
//            }
//        }
//        return minR;
//    }
//    
//    int min(int a, int b){
//        return (a<b)? a:b;
//    }
//    
//    int max(int a, int b){
//        return (a>b)? a:b;
//    }
//};
//int main(){
//    //[1,2,3,4]
//   // [1,4]
//    Solution sol;
//    vector<int> nums;
//    nums.push_back(1);
//    nums.push_back(2);
//    nums.push_back(3);
//  //  nums.push_back(4);
//    vector<int> heaters;
//     heaters.push_back(2);
//  //  heaters.push_back(4);
////    nums.push_back(5);
////    nums.push_back(3);
////    nums.push_back(5);
//    cout<<sol.findRadius(nums,heaters)<<endl;
//}
