#pragma once
#include "AccountCollection.h"
class SignUpUI;

//ȸ������ ��� ������ ���� control class
class SignUp {
    SignUpUI* pSignUpUI = nullptr;  //boundary class�� ���۷���
    AccountCollection* pAccountCollection = nullptr;    //AccountCollection�� ���۷���
public:
    //control class�� ������ �� AccountCollection�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
    SignUp(AccountCollection* pAccountCollection, ofstream& out_fp);

    //������ id, password, ��ȭ��ȣ�� �Ķ���ͷ� �޾Ƽ� �ش�Ǵ� ������ ���� ����
    void signUpNewUser(string id, string password, string phonenumber);

    SignUpUI* getpSignUpUI() { return pSignUpUI; }  //contorl class�� ������ boundary class�� ���۷����� ����
};