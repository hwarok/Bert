#pragma once
#include "CurrentLoginUser.h"
#include "LogoutUI.h"
class LogoutUI;

//로그아웃 기능 수행을 위한 control class
class Logout {
	LogoutUI* pLogoutUI = nullptr;	//boundary class의 레퍼런스
	CurrentLoginUser* pCurrentLoginUser = nullptr;	//CurrentLoginUser의 레퍼런스

public:
	//control class가 생성될 때 CurrentLoginUser의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
	Logout(CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp);

	//로그아웃하고 해당 유저의 id를 리턴
	string logoutUser();

	LogoutUI* getpLogoutUI() { return pLogoutUI; }	//contorl class가 생성한 boundary class의 레퍼런스를 리턴
};