////
////  tree.cpp
////  FIrst_Project
////
////  Created by Данил on 13/09/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Node{
//public:
//    int iData = NULL;
//    double fData = NULL;
//    Node * leftChild = nullptr;
//    Node * rightChild = nullptr;
//    void displayNode(){}
//    Node(){}
//    Node(int id, double val){
//        iData = id;
//        fData = val;
//    }
//    Node(Node * nod){
//        iData = nod->iData;
//        fData = nod->fData;
//        leftChild = nod->leftChild;
//        rightChild = nod->rightChild;
//    }
//};
//
////o(n)  o(1024)
////o(log(2) n)  log(2)1024 = x   2^10=1024  == 10
//class Tree{
//    Node * nodeRoot;
//public:
//    Node * getRoot(){
//        return nodeRoot;
//    }
//    Node * find(int key) { // поиск узла с заданным ключом (предполагается, что дерево не пустое)
//        Node * current = nodeRoot;//начинаем с корневого узла
//        while(current->iData != key){//пока не найдено совпадение
//            if(key<current->iData){ //двигаться налево?
//                current = current->leftChild;
//            }else{
//                current = current->rightChild; //двигаться направо
//            }
//            if(current == nullptr){//если потомка нет, поиск завершился неудачей
//                return nullptr;
//            }
//        }
//        return current;//элемент найден
//    }
//    void insert(int id, double val) {
//        Node * node = new Node(id,val);
//        if(nodeRoot == nullptr){
//            nodeRoot = node;
//        }else{
//            Node * current = nodeRoot;
//            Node * parent;
//            while(true) {
//                parent = current;
//                if(id < current->iData){ //двигаться налево
//                    current = current->leftChild;
//                    if(current == nullptr){//если достигнут конец цепочки встать левым
//                        parent->leftChild = node;
//                        return;
//                    }
//                }else{
//                    current = current->rightChild;
//                    if(current == nullptr){
//                        parent->rightChild = node;
//                        return;
//                    }
//                }
//            }
//        }
//    }
//    void inOrder(Node * localRoot){
//        if(localRoot == nullptr){
//            return;
//        }
//        inOrder(localRoot->leftChild);
//        cout<<localRoot->iData<<","<<localRoot->fData<<endl;
//        inOrder(localRoot->rightChild);
//    }
//    void postOrder(Node * localRoot){
//        if(localRoot == nullptr){
//            return;
//        }
//        postOrder(localRoot->leftChild);
//        postOrder(localRoot->rightChild);
//        cout<<localRoot->iData<<","<<localRoot->fData<<endl;
//    }
//    void postOrderDelete(Node * localRoot){
//        if(localRoot == nullptr){
//            return;
//        }
//        postOrderDelete(localRoot->leftChild);
//        postOrderDelete(localRoot->rightChild);
//        delete localRoot->leftChild, localRoot->rightChild, localRoot;
//    }
//    bool deleteNode(int id){
//        Node * current = nodeRoot;
//        Node * parent = nodeRoot;
//        bool isLeftChild = true;
//        while(current->iData != id) {
//            parent = current;
//            if(id < current->iData){ //двигаться налево
//                current = current->leftChild;
//                isLeftChild = true;
//            }else{
//                isLeftChild = false;
//                current = current->rightChild;
//            }
//            if(current == nullptr){
//                return false;
//            }
//        }
//        if(current->leftChild == nullptr && current->rightChild == nullptr){ //нет потомков
//            if(current == nodeRoot){
//                delete nodeRoot;
//                nodeRoot = nullptr;
//            }else if(isLeftChild){
//                delete current;
//                parent->leftChild = nullptr;
//            }else{
//                delete current;
//                parent->rightChild = nullptr;
//            }
//        }else if(current->rightChild != nullptr){ //один потомок
//            if(current == nodeRoot){
//                nodeRoot = current->leftChild;
//            }else if(isLeftChild){
//                parent->leftChild = current->leftChild;
//            }else{
//                 parent->rightChild = current->leftChild;
//            }
//            delete current;
//        }if(current->leftChild != nullptr){//один потомок
//            if(current == nodeRoot){
//                nodeRoot = current->rightChild;
//            }else if(isLeftChild){
//                parent->leftChild = current->rightChild;
//            }else{
//                parent->rightChild = current->rightChild;
//            }
//            delete current;
//        }//2 потомок
//        else{
//             //два потомка, узел заменяется приемником
//            //поиск преемника для удаляемого узла
//            Node * successor = getsuccsesor(current);
//            if(current == nodeRoot){
//                //delete nodeRoot;
//                nodeRoot = successor;
//            }else if(isLeftChild){
//                parent->leftChild = successor->leftChild;
//            }else{
//                 parent->rightChild = successor->rightChild;
//            }
//            successor->leftChild = current->leftChild;
//        }
//        
//        return true;
//    }
//    Node * min(Node * nodeStart) {
//        Node * current = nodeStart;//обход начинается с корневого узла
//        Node * min;
//        while(current != nullptr){//продолжается до самого "низа"
//            min = current;//сохранение узла
//            current = current->leftChild;//переход к следующему потомккку
//        }
//        return min;
//    }
//    Node * max(Node * nodeStart) {
//        Node * current = nodeStart;//обход начинается с корневого узла
//        Node * max;
//        while(current != nullptr){//продолжается до самого "низа"
//            max = current;//сохранение узла
//            current = current->rightChild;//переход к следующему потомккку
//        }
//        return max;
//    }
//    void thirdProblem(/*Node * node*/Node * root){
////        if(node->leftChild==nullptr){
////            root->iData = node->iData;
////            root->fData = node->fData;
////            return;
////        }
//        Node * miin;
//        miin = min(root->rightChild);
//        root->iData = miin->iData;
//        root->fData = miin->fData;
//    }
//    Node * comeDown(Node * nod){
//        if(nod->leftChild == nullptr){
//            return nod;
//        }
//        if(nod->rightChild != nullptr){
//            return nod->rightChild;
//        }
//        Node * node = nod;
//        comeDown(nod->leftChild);
//        return node;
//    }
//    
//    Node * getsuccsesor(Node * deleteNode) {
//        Node * succsesorParent = deleteNode;
//        Node * succsesor = deleteNode;
//        Node * current = deleteNode->rightChild;//переход к правому потомку
//        while(current != nullptr) { //todo реализовать поиск родителя приемника
//            succsesorParent = succsesor;
//            succsesor = current;
//            current = current->leftChild;//переход к левому потомку
//        }
//
//        if(succsesor != deleteNode->rightChild){
//            succsesorParent->leftChild = succsesor->rightChild;
//            succsesor->rightChild = deleteNode->rightChild;
//        }
//        return succsesor;
//    }
//    Node * getsuccsesor2(int fd,int id) {
//        Node * current = nodeRoot;
//        while(true){
////            cout<<current->leftChild<<" "<<current->rightChild<<endl;
////             cout<<deleteNode<<endl;
//            if(current->iData > id){
//                current = current->leftChild;
//            }else{
//                current = current->rightChild;
//            }
//            if(current->leftChild->fData == fd || current->rightChild->fData == fd){
//                break;
//            }
//        }//log n
//        return current;
//    }
//    
//    void newDelete(int id){
//        Node * nod;// elem to delete
//        Node * node = nullptr;//elem which replaces nod
//        nod = find(id);
//        if(nod->leftChild == nullptr && nod->rightChild == nullptr){
//            nod = node;
//            return;
//        }
//        if(nod->rightChild == nullptr){
//            node = max(nod->leftChild);
//        }else{
//            node = min(nod->rightChild);
//        }
//        if(node->rightChild == nullptr){
//            node->rightChild = nod->rightChild;
//        }
//        if(node->leftChild == nullptr){
//            node->leftChild = nod->leftChild;
//        }
//        int ida = node->iData;
//        int fd = node->fData;
//        delete node;
//        nod->iData = ida;
//        nod->fData = fd;
//        //find node elem in nod delete it without touching node
//    }
//};
//class TreeApp{
//public:
//    void start(){
//        Tree tree;
//      tree.insert(50, 1.5);
//        tree.insert(28, 1.7);
//        //tree.insert(29, 4);
//        //tree.insert(75, 1.9);
//        // tree.insert(74, 77);
//       // tree.insert(76, 1.8);
//        tree.insert(27, 8);
//        tree.insert(26, 5);
//        tree.insert(22, 9);
//        tree.insert(1, 2);
//        tree.inOrder(tree.getRoot());
//        cout<<"___"<<endl;
//        tree.postOrder(tree.getRoot());
//        Node * found = tree.find(25);
//        if(found != nullptr){
//            cout<<"found the node with key"<<endl;
//        }else{
//            cout<<"Node couldn't find with key"<<endl;
//        }
//        cout<<tree.min(tree.getRoot())->iData<<endl;
////        tree.newDelete(28);
////        tree.inOrder(tree.getRoot());
//        tree.newDelete(28);
//        cout<<tree.getsuccsesor(tree.find(28))->iData<<endl;
//    }
//};
//int main(){
//    TreeApp app;
//    app.start();
//    
//}
