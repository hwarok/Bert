#include <string>
#include <fstream>
#include "SignUp.h"
#include "SignUpUI.h"
using namespace std;

//control class�� ������ �� AccountCollection�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
SignUp::SignUp(AccountCollection* pAccountCollection, ofstream& out_fp) {
    //���۷����� �Ѱܹ���
    this->pAccountCollection = pAccountCollection;
    
    //boundary class�� �����ϰ� control class, out_fp�� ���۷����� ����. startInterface()�� ȣ���Ͽ� ȭ���� ���
    pSignUpUI = new SignUpUI(this, out_fp);
    pSignUpUI->startInterface();
}

//������ id, password, ��ȭ��ȣ�� �Ķ���ͷ� �޾Ƽ� �ش�Ǵ� ������ ���� ����
void SignUp::signUpNewUser(string id, string password, string phonenumber) {
    pAccountCollection->addNewAccount(id, password, phonenumber);   //AccountCollection���� id, password, ��ȭ��ȣ�� �Ķ���ͷ� �Ѱܼ� �ش�Ǵ� ���� �߰� ��û
}