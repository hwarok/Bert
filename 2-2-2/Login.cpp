#include <string>
#include <fstream>
#include "Login.h"
#include "Account.h"
using namespace std;

//control class�� ������ �� AccountCollection�� ���۷���, CurrentLoginUser�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
Login::Login(AccountCollection* pAccountCollection, CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp) {
	//���۷������� �Ѱܹ���
	this->pAccountCollection = pAccountCollection;
	this->pCurrentLoginUser = pCurrentLoginUser;

	//boundary class�� �����ϰ� control class, out_fp�� ���۷����� ����. startInterface()�� ȣ���Ͽ� ȭ���� ���
	pLoginUI = new LoginUI(this, out_fp);
	pLoginUI->startInterface();
}

//������ id, password�� �Ķ���ͷ� �޾Ƽ� �ش�Ǵ� ������ ������ �α���
void Login::loginUser(string id, string password) {
	Account* pAccount = pAccountCollection->getAccount(id, password);	//AccountCollection���� �Է¹��� id�� password�� ���� Account�� ���۷����� �޾ƿ�
	pCurrentLoginUser->setLogin(pAccount);	//CurrentLoginUser���� �ش� Account�� �α��� ���� ��û
}