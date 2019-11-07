////
////  justForTestQuickTricks.cpp
////  FIrst_Project
////
////  Created by Данил on 18/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//void funct();
//
//struct keyPasw{
//    int num;
//    int key;
//    int last = 0;
//};
//
//class LRUCache {
//    keyPasw *cache;
//    int size;
//    int last = 0;
//public:
//    void print(){
//        for(int i=0; i<size; i++){
//            cout<<"num:"<<cache[i].num<<endl;
//            cout<<"key:"<<cache[i].key<<endl;
//        }
//        cout<<"__________"<<endl;
//    }
//    LRUCache(int capacity):size(capacity){
//        cache = new keyPasw[capacity];
//        for(int i=0; i<size; i++){
//            cache[i].key = -1;
//            cache[i].num = -1;
//        }
//    }
//
//    int get(int key) {
//        for(int i=0; i<size; i++){
//            cache[i].last++;
//        }
//        int i = size-1;
//        while(i!=-1){
//            if(cache[i].key == key){
//                cache[i].last = 0;
//                return cache[i].num;
//            }
//            i--;
//        }
//        return -1;
//    }
//
//    void put(int key, int value){
//        int max = 0;
//        bool test = false;
//        for(int i=0; i<size; i++){
//            if(cache[i].key == key && cache[i].last>=max){
//                max = cache[i].last;
//                last = i;
//                test = true;
//            }
//        }
//        if(!test){
//            for(int i=0; i<size; i++){
//                if(cache[i].last>=max){
//                    max = cache[i].last;
//                    last = i;
//                }
//            }
//        }
//        cache[last].key = key;
//        cache[last].num = value;
//        for(int i=0; i<size; i++){
//            cache[i].last++;
//        }
//        cache[last].last = 0;
//
//    }
//    ~LRUCache(){
//        delete [] cache;
//    }
//};
//int main(){
//    //["LRUCache","put","put","put","get","put","put","get","put","put","get","put","get","get","get","put","put","get","put","get"]
//   // [[10],[7,28],[7,1],[8,15],[6],[10,27],[8,10],[8],[6,29],[1,9],[6],[10,7],[1],[2],[13],[8,30],[1,5],[1],[13,2],[12]]
//    LRUCache cache = *new LRUCache(2);
//    
////    cache.put(7, 28);
////    cache.print();
////    cache.put(7, 1);
////    cache.print();
////    cache.put(8, 15);
////    cache.print();
////    cout<<cache.get(6)<<endl;
////    cache.print();
////    cache.put(10, 27);
////    cache.print();
////    cache.put(8, 10);
////    cache.print();
////    cout<<cache.get(8)<<endl;
////    cache.print();
////    cache.put(6, 29);
////    cache.print();
////    cache.put(1, 9);
////    cache.print();
////    cout<<cache.get(6)<<endl;
////    cache.print();
////    cache.put(10, 7);
////    cache.print();
////    cout<<cache.get(1)<<endl;
////    cache.print();
////    cout<<cache.get(2)<<endl;
////    cache.print();
////    cout<<cache.get(13)<<endl;
////    cache.print();
////    cache.put(8, 30);
////    cache.print();
////    cache.put(1, 5);
////    cache.print();
////    cout<<cache.get(1)<<endl;
////    cache.print();
////    cache.put(13, 2);
////    cache.print();
////    cout<<cache.get(12)<<endl;
////    cache.print();
//    
////        cache.put(1, 1);
////        cache.put(2, 2);
////        cache.put(3, 3);
////        cache.put(4, 4);
////        cout<<cache.get(4)<<endl;       // returns 1
////        cout<<cache.get(3)<<endl;       // returns -1 (not found)// evicts key 1
////        cout<<cache.get(2)<<endl;
////        cout<<cache.get(1)<<endl;       // returns 3
////        cache.put(5, 5);// returns -1 (not found)
////        cout<<cache.get(1)<<endl;       // returns 4
////        cout<<cache.get(2)<<endl;
////        cout<<cache.get(3)<<endl;       // returns 3
////        cout<<cache.get(4)<<endl;       // returns 4
////        cout<<cache.get(5)<<endl;       // returns 3
//    
// // cout<<cache.get(0)<<endl;
//    
////    cache.put(2, 1);
////    cache.put(3, 2);
////    cout<<cache.get(3)<<endl;       // returns 1
////    cout<<cache.get(2)<<endl;       // returns -1 (not found)
////    cache.put(4, 3);    // evicts key 1
////    cout<<cache.get(2)<<endl;       // returns -1 (not found)
////    cout<<cache.get(3)<<endl;       // returns 3
////    cout<<cache.get(4)<<endl;       // returns 4
//    
//    
////    cache.put(1, 1);
////    cache.put(2, 2);
////    cout<<cache.get(1)<<endl;       // returns 1
////    cache.put(3, 3);    // evicts key 2
////    cout<<cache.get(2)<<endl;     // returns -1 (not found)
////    cache.put(4, 4);    // evicts key 1
////    cout<<cache.get(1)<<endl;       // returns -1 (not found)
////    cout<<cache.get(3)<<endl;       // returns 3
////    cout<<cache.get(4)<<endl;       // returns 4
//    
////    cout<<cache.get(2)<<endl;
////    cache.put(2, 6);
////    cout<<cache.get(1)<<endl;       // returns 1
////    cache.put(1, 5);    // evicts key 2
////    cache.put(1, 2);    // evicts key 1
////    cout<<cache.get(1)<<endl;       // returns -1 (not found)////////???????????????????
////    cout<<cache.get(2)<<endl;       // returns 3
//    
////    cache.put(2, 1);
////    cout<<cache.get(2)<<endl;       // returns 1
////    cache.put(3, 2);    // evicts key 2
////    cout<<cache.get(2)<<endl;       // returns -1 (not found)
////    cout<<cache.get(3)<<endl;       // returns 3
//
////    cache.put(2, 1);
////    cache.print();
////    cache.put(2, 2);
////    cache.print();
////    cout<<cache.get(2)<<endl;
////    cache.print();  // returns 1
////    cache.put(1, 1);    // evicts key 2
////    cache.print();
////    cache.put(4, 1);    // evicts key 1
////    cache.print();
////    cout<<cache.get(2)<<endl;       // returns -1 (not found)
////    cache.print();
//    
//    
//}
//void funct(){
//    return;
//}
