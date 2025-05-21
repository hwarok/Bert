#pragma once
#include "Account.h"
#include <iostream>

//현재 접속 중인 유저를 추적하는 entity class
class CurrentLoginUser {
    Account* currentLoginUser = nullptr;    //현재 접속 중인 유저의 계정을 가리킨다
public:
    //매개변수로 Account 객체의 레퍼런스를 받아 해당 계정이 로그인 한 것으로 처리한다
    void setLogin(Account* pAccount);
    
    //현재 접속 중인 유저가 로그아웃한 것으로 처리한다. 이때 해당 유저의 ID를 리턴
    string setLogout();
    
    Account* getCurrentLoginUser() { return currentLoginUser; } //현재 접속 중인 유저의 계정의 레퍼런스를 리턴
};