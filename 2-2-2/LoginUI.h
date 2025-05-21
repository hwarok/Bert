#pragma once
#include "Login.h"
class Login;

//로그인 기능 수행을 위한 boudnary class
class LoginUI {
    Login* pLogin;  //control class의 레퍼런스
    ofstream& out_fp;   //결과 출력을 위한 out_fp의 레퍼런스
public:
    //boundary class가 생성될 때 control class의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
    LoginUI(Login* pLogin, ofstream& out_fp)
        :pLogin(pLogin), out_fp(out_fp) {}
    
    //화면 출력
    void startInterface();
    
    //유저에게 계정의 id, password를 입력받아 로그인 수행
    void login(string id, string password);
};