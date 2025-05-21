#pragma once
#include <string>
using namespace std;

//자전거의 정보를 관리하는 entity class
class Bike {
    string id;  //자전거의 id
    string productName; //자전거의 제품명
public:
    //id,제품명으로 Bike를 생성
    Bike(string id, string productName)
        :id(id), productName(productName) {}

    string getID() { return id; }   //자전거의 id를 리턴
    string getProductName() { return productName; } //자전거의 제품명을 리턴
};