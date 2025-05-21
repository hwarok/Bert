#pragma once
#include "Logout.h"
class Logout;

//로그아웃 기능 수행을 위한 boudnary class
class LogoutUI {
    Logout* pLogout;    //control class의 레퍼런스
    ofstream& out_fp;   //결과 출력을 위한 out_fp의 레퍼런스
public:
    //boundary class가 생성될 때 control class의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
    LogoutUI(Logout* pLogout, ofstream& out_fp)
        :pLogout(pLogout), out_fp(out_fp) {}

    //화면 출력
    void startInterface();

    //현재 접속 중인 유저의 로그아웃 수행
    void logout();
};