#include <string>
#include <fstream>
#include "Logout.h"
using namespace std;

//control class가 생성될 때 CurrentLoginUser의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
Logout::Logout(CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp) {
	//레퍼런스를 넘겨받음
	this->pCurrentLoginUser = pCurrentLoginUser;

	//boundary class를 생성하고 control class, out_fp의 레퍼런스를 전달. startInterface()를 호출하여 화면을 출력
	pLogoutUI = new LogoutUI(this, out_fp);
	pLogoutUI->startInterface();
}

//로그아웃하고 해당 유저의 id를 리턴
string Logout::logoutUser() {
	string logoutUserID = pCurrentLoginUser->setLogout();	//CurrentLoginUser에게 현재 접속 중인 유저의 로그아웃 처리 요청. 해당 유저의 id를 리턴받음
	return logoutUserID;
}