#pragma once
#include "AccountCollection.h"
#include "CurrentLoginUser.h"
#include "LoginUI.h"
class LoginUI;

//�α��� ��� ������ ���� control class
class Login {
	LoginUI* pLoginUI = nullptr;	//boundary class�� ���۷���
	AccountCollection* pAccountCollection = nullptr;	//AccountCollection�� ���۷���
	CurrentLoginUser* pCurrentLoginUser = nullptr;	//CurrentLoginUser�� ���۷���
public:
	//control class�� ������ �� AccountCollection�� ���۷���, CurrentLoginUser�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
	Login(AccountCollection* pAccountCollection, CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp);

	//������ id, password�� �Ķ���ͷ� �޾Ƽ� �ش�Ǵ� ������ ������ �α���
	void loginUser(string id, string password);

	LoginUI* getpLoginUI() { return pLoginUI; }	//contorl class�� ������ boundary class�� ���۷����� ����
};