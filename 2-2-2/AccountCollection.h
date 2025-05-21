#pragma once
#include "Account.h"

//��ϵ� Account ��ü���� linked list ���·� �����ϴ� entity class
class AccountCollection {
    struct Node {
        Account* pAccount;  //Account ��ü�� ���۷���
        Node* next = nullptr;   //���� ���
        Node(Account* pAccount) 
            :pAccount(pAccount) {}
    };
    Node* ownedAccount = nullptr;   //linked list�� head
    int accountNumber = 0;  //linked list�� ���� �ִ� Account ��ü���� ����
public:
    //���ο� Account ��ü�� �߰�. �Ű������� Account�� id, password, phonenumber
    void addNewAccount(string id, string password, string phonenumber = "");
    
    //id�� password�� ��ġ�ϴ� Account�� ã�Ƽ� ���۷����� ����
    Account* getAccount(string id, string password);
};