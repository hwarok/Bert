#pragma once
#include "Login.h"
class Login;

//�α��� ��� ������ ���� boudnary class
class LoginUI {
    Login* pLogin;  //control class�� ���۷���
    ofstream& out_fp;   //��� ����� ���� out_fp�� ���۷���
public:
    //boundary class�� ������ �� control class�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
    LoginUI(Login* pLogin, ofstream& out_fp)
        :pLogin(pLogin), out_fp(out_fp) {}
    
    //ȭ�� ���
    void startInterface();
    
    //�������� ������ id, password�� �Է¹޾� �α��� ����
    void login(string id, string password);
};