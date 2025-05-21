#pragma once
#include "Account.h"
#include <iostream>

//���� ���� ���� ������ �����ϴ� entity class
class CurrentLoginUser {
    Account* currentLoginUser = nullptr;    //���� ���� ���� ������ ������ ����Ų��
public:
    //�Ű������� Account ��ü�� ���۷����� �޾� �ش� ������ �α��� �� ������ ó���Ѵ�
    void setLogin(Account* pAccount);
    
    //���� ���� ���� ������ �α׾ƿ��� ������ ó���Ѵ�. �̶� �ش� ������ ID�� ����
    string setLogout();
    
    Account* getCurrentLoginUser() { return currentLoginUser; } //���� ���� ���� ������ ������ ���۷����� ����
};