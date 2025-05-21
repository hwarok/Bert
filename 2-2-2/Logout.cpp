#include <string>
#include <fstream>
#include "Logout.h"
using namespace std;

//control class�� ������ �� CurrentLoginUser�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
Logout::Logout(CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp) {
	//���۷����� �Ѱܹ���
	this->pCurrentLoginUser = pCurrentLoginUser;

	//boundary class�� �����ϰ� control class, out_fp�� ���۷����� ����. startInterface()�� ȣ���Ͽ� ȭ���� ���
	pLogoutUI = new LogoutUI(this, out_fp);
	pLogoutUI->startInterface();
}

//�α׾ƿ��ϰ� �ش� ������ id�� ����
string Logout::logoutUser() {
	string logoutUserID = pCurrentLoginUser->setLogout();	//CurrentLoginUser���� ���� ���� ���� ������ �α׾ƿ� ó�� ��û. �ش� ������ id�� ���Ϲ���
	return logoutUserID;
}