#pragma once
#include "AccountCollection.h"
#include "CurrentLoginUser.h"
#include "LoginUI.h"
class LoginUI;

//로그인 기능 수행을 위한 control class
class Login {
	LoginUI* pLoginUI = nullptr;	//boundary class의 레퍼런스
	AccountCollection* pAccountCollection = nullptr;	//AccountCollection의 레퍼런스
	CurrentLoginUser* pCurrentLoginUser = nullptr;	//CurrentLoginUser의 레퍼런스
public:
	//control class가 생성될 때 AccountCollection의 레퍼런스, CurrentLoginUser의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
	Login(AccountCollection* pAccountCollection, CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp);

	//게정의 id, password를 파라미터로 받아서 해당되는 계정의 유저를 로그인
	void loginUser(string id, string password);

	LoginUI* getpLoginUI() { return pLoginUI; }	//contorl class가 생성한 boundary class의 레퍼런스를 리턴
};