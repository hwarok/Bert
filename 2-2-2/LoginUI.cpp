#include <fstream>
#include <string>
#include "LoginUI.h"
using namespace std;

//ȭ�� ���
void LoginUI::startInterface() {
	out_fp << "2.1. �α���" << endl;
}

//�������� ������ id, password�� �Է¹޾� �α��� ����
void LoginUI::login(string id, string password) {
	pLogin->loginUser(id, password);	//control class���� ������ id, password�� �Ѱ� �ش� ������ �α��� ���� ��û
	out_fp << "> " << id << " " << password << " " << endl << endl;  //��� ���
}