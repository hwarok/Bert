#include <fstream>
#include <string>
#include "LogoutUI.h"
using namespace std;

//ȭ�� ���
void LogoutUI::startInterface() {
	out_fp << "2.2. �α׾ƿ�" << endl;
}

//���� ���� ���� ������ �α׾ƿ� ����
void LogoutUI::logout() {
	string logoutUserID = pLogout->logoutUser();	//control class���� ���� ���� ���� ������ �α׾ƿ� ���� ��û. �ش� ������ id�� ���Ϲ���
	out_fp << "> " << logoutUserID << endl << endl;  //��� ���
}