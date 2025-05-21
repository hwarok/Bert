#pragma once
#include "SignUp.h"
class SignUp;

//ȸ������ ��� ������ ���� boundary class
class SignUpUI {
    SignUp* pSignUp;    //control class�� ���۷���
    ofstream& out_fp;   //��� ����� ���� out_fp�� ���۷���
public:
    //boundary class�� ������ �� control class�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
    SignUpUI(SignUp* pSignUp, ofstream& out_fp)
        :pSignUp(pSignUp), out_fp(out_fp) {}

    //ȭ�� ���
    void startInterface();

    //�������� ������ id, password, ��ȭ��ȣ�� �Է¹޾Ƽ� �ش�Ǵ� ������ ���� ����
    void signUp(string id, string password, string phonenumber);
};