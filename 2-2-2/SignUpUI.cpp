#include <fstream>
#include <string>
#include "SignUpUI.h"
using namespace std;

//ȭ�� ���
void SignUpUI::startInterface() {
    out_fp << "1.1. ȸ������" << endl;
}

//�������� ������ id, password, ��ȭ��ȣ�� �Է¹޾Ƽ� �ش�Ǵ� ������ ���� ����
void SignUpUI::signUp(string id, string password, string phonenumber) {
    pSignUp->signUpNewUser(id, password, phonenumber);  //control class���� ������ id, password, ��ȭ��ȣ�� �Ѱ� �ش�Ǵ� ������ ���� ��û
    out_fp << "> " << id << " " << password << " " << phonenumber << endl << endl;  //��� ���
}