////
////  product.cpp
////  FIrst_Project
////
////  Created by Данил on 30/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//class Product{
//protected: //чтобы поля были доступны потомкам, но не были доступны извне
//    string nameOfProduct;
//    int priceOfProduct;
//    int weightOfProduct;
//public:
//    Product(string nop, int pop,int wop);
//    void showBuyingGoodInfo() const;
//    void setProduct(int pop);// используем чтобы изменить цену продукта
//    int getProduct(); //используем чтобы извне получить цену
//    string getNameOfProduct();//используем чтобы извне получить имя товара
//};
//void Product::setProduct(int pop){
//    priceOfProduct = pop;
//}
//int Product::getProduct(){
//    return priceOfProduct;
//}
//string Product::getNameOfProduct(){
//    return nameOfProduct;
//}
//Product::Product(string nop, int pop,int wop){
//    nameOfProduct = nop;
//    priceOfProduct = pop;
//    weightOfProduct = wop;
//}
//void Product::showBuyingGoodInfo() const {
//    cout<<"product:"<<nameOfProduct<<endl;
//    cout<<"weight:"<<weightOfProduct<<endl;
//    cout<<"price:"<<priceOfProduct<<endl;
//}
//
//class Buy:public Product{
//public:
//    int howMuchProduct;
//    Buy(int hmp, string nop, int pop,int wop):Product(nop,pop,wop){
//        howMuchProduct = hmp;
//    }
//};
//
//class Check:public Buy{ //используем public модификатор для наследования (чтобы видеть члены данных)
//private:
//public:
//    Check(int hmp, string nop, int pop,int wop):Buy(hmp,nop,pop,wop){}//вызов конструктора базового класса
//    void buy();
//};
//void Check::buy(){
//    cout<<"product:"<<nameOfProduct<<endl; //поля доступны из родительских классов
//    cout<<"weight:"<<weightOfProduct * howMuchProduct<<"g"<<endl;
//    cout<<"price:"<<priceOfProduct * howMuchProduct<<endl;
//}
//int main(){
//    Check check(3,"milk",300,500);
//    check.buy();
//}
