#pragma once
#include "Logout.h"
class Logout;

//�α׾ƿ� ��� ������ ���� boudnary class
class LogoutUI {
    Logout* pLogout;    //control class�� ���۷���
    ofstream& out_fp;   //��� ����� ���� out_fp�� ���۷���
public:
    //boundary class�� ������ �� control class�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
    LogoutUI(Logout* pLogout, ofstream& out_fp)
        :pLogout(pLogout), out_fp(out_fp) {}

    //ȭ�� ���
    void startInterface();

    //���� ���� ���� ������ �α׾ƿ� ����
    void logout();
};