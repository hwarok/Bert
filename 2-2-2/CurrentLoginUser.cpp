#include <string>
#include <fstream>
#include "CurrentLoginUser.h"
#include "Account.h"
using namespace std;

//매개변수로 Account 객체의 레퍼런스를 받아 해당 계정이 로그인 한 것으로 처리한다
void CurrentLoginUser::setLogin(Account* pAccount) {
	currentLoginUser = pAccount;	//현재 접속 중인 유저는 매개변수의 Account
}

//현재 접속 중인 유저가 로그아웃한 것으로 처리한다. 이때 해당 유저의 ID를 리턴
string CurrentLoginUser::setLogout() {
	string logoutUserID = currentLoginUser->getID();	//현재 접속 중인 유저의 ID를 리턴
	currentLoginUser = nullptr;	//현재 접속 중인 유저는 없음
	return logoutUserID;
}