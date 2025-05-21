#include <string>
#include <fstream>
#include "CurrentLoginUser.h"
#include "Account.h"
using namespace std;

//�Ű������� Account ��ü�� ���۷����� �޾� �ش� ������ �α��� �� ������ ó���Ѵ�
void CurrentLoginUser::setLogin(Account* pAccount) {
	currentLoginUser = pAccount;	//���� ���� ���� ������ �Ű������� Account
}

//���� ���� ���� ������ �α׾ƿ��� ������ ó���Ѵ�. �̶� �ش� ������ ID�� ����
string CurrentLoginUser::setLogout() {
	string logoutUserID = currentLoginUser->getID();	//���� ���� ���� ������ ID�� ����
	currentLoginUser = nullptr;	//���� ���� ���� ������ ����
	return logoutUserID;
}