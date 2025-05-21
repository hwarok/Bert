#include <fstream>
#include <string>
#include "LogoutUI.h"
using namespace std;

//화면 출력
void LogoutUI::startInterface() {
	out_fp << "2.2. 로그아웃" << endl;
}

//현재 접속 중인 유저의 로그아웃 수행
void LogoutUI::logout() {
	string logoutUserID = pLogout->logoutUser();	//control class에게 현재 접속 중인 유저의 로그아웃 수행 요청. 해당 유저의 id를 리턴받음
	out_fp << "> " << logoutUserID << endl << endl;  //결과 출력
}