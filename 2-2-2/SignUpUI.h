#pragma once
#include "SignUp.h"
class SignUp;

//회원가입 기능 수행을 위한 boundary class
class SignUpUI {
    SignUp* pSignUp;    //control class의 레퍼런스
    ofstream& out_fp;   //결과 출력을 위한 out_fp의 레퍼런스
public:
    //boundary class가 생성될 때 control class의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
    SignUpUI(SignUp* pSignUp, ofstream& out_fp)
        :pSignUp(pSignUp), out_fp(out_fp) {}

    //화면 출력
    void startInterface();

    //유저에게 계정의 id, password, 전화번호를 입력받아서 해당되는 계정을 새로 생성
    void signUp(string id, string password, string phonenumber);
};