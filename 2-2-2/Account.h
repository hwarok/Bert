#pragma once
#include <string>
#include "RentedBike.h"
#include <vector>
using namespace std;

//계정 보유자(회원, 관리자)의 계정 정보를 관리하는 entity class
class Account {
    string id;  //계정의 id
    string password;    //계정의 비밀번호
    string phonenumber; //계정 보유자의 전화번호
    RentedBike rentedBike;  //계정에서 빌린 자전거들
public:
    //id, 비밀번호, 전화번호로 계정을 생성
    //관리자의 계정은 전화번호를 필요치 않음
    Account(string id, string password, string phonenumber = "")
        :id(id), password(password), phonenumber(phonenumber) {}

    //계정에서 빌린 자전거 정보를 추가. 매개변수는 빌릴 자전거의 레퍼런스
    void addRentedBike(Bike* rentBike);
    
    //계정에서 빌린 자전거들의 레퍼런스들을 리턴
    vector<Bike*> listRentedBike();

    string getID() { return id; }   //계정의 id를 리턴
    string getPassword() { return password; }   //계정의 비밀번호를 리턴
    string getPhonenumber() { return phonenumber; } //계정 보유자의 전화번호를 리턴
};