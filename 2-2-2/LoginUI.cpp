#include <fstream>
#include <string>
#include "LoginUI.h"
using namespace std;

//화면 출력
void LoginUI::startInterface() {
	out_fp << "2.1. 로그인" << endl;
}

//유저에게 계정의 id, password를 입력받아 로그인 수행
void LoginUI::login(string id, string password) {
	pLogin->loginUser(id, password);	//control class에게 계정의 id, password를 넘겨 해당 유저의 로그인 수행 요청
	out_fp << "> " << id << " " << password << " " << endl << endl;  //결과 출력
}