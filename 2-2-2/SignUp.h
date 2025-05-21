#pragma once
#include "AccountCollection.h"
class SignUpUI;

//회원가입 기능 수행을 위한 control class
class SignUp {
    SignUpUI* pSignUpUI = nullptr;  //boundary class의 레퍼런스
    AccountCollection* pAccountCollection = nullptr;    //AccountCollection의 레퍼런스
public:
    //control class가 생성될 때 AccountCollection의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
    SignUp(AccountCollection* pAccountCollection, ofstream& out_fp);

    //계정의 id, password, 전화번호를 파라미터로 받아서 해당되는 계정을 새로 생성
    void signUpNewUser(string id, string password, string phonenumber);

    SignUpUI* getpSignUpUI() { return pSignUpUI; }  //contorl class가 생성한 boundary class의 레퍼런스를 리턴
};