#pragma once
#include "CurrentLoginUser.h"
#include "LogoutUI.h"
class LogoutUI;

//�α׾ƿ� ��� ������ ���� control class
class Logout {
	LogoutUI* pLogoutUI = nullptr;	//boundary class�� ���۷���
	CurrentLoginUser* pCurrentLoginUser = nullptr;	//CurrentLoginUser�� ���۷���

public:
	//control class�� ������ �� CurrentLoginUser�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
	Logout(CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp);

	//�α׾ƿ��ϰ� �ش� ������ id�� ����
	string logoutUser();

	LogoutUI* getpLogoutUI() { return pLogoutUI; }	//contorl class�� ������ boundary class�� ���۷����� ����
};