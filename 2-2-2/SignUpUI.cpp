#include <fstream>
#include <string>
#include "SignUpUI.h"
using namespace std;

//화면 출력
void SignUpUI::startInterface() {
    out_fp << "1.1. 회원가입" << endl;
}

//유저에게 계정의 id, password, 전화번호를 입력받아서 해당되는 계정을 새로 생성
void SignUpUI::signUp(string id, string password, string phonenumber) {
    pSignUp->signUpNewUser(id, password, phonenumber);  //control class에게 계정의 id, password, 전화번호를 넘겨 해당되는 계정의 생성 요청
    out_fp << "> " << id << " " << password << " " << phonenumber << endl << endl;  //결과 출력
}