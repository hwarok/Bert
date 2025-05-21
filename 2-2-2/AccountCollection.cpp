#include "AccountCollection.h"

//���ο� Account ��ü�� �߰�. �Ű������� Account�� id, password, phonenumber
void AccountCollection::addNewAccount(string id, string password, string phonenumber) {
    Account* newAccount = new Account(id, password, phonenumber);   //�� Account�� ��ü ����
   
    //linked list�� �߰�
    Node* newNode = new Node(newAccount);
    newNode->next = ownedAccount;
    ownedAccount = newNode;

    accountNumber++;    //linked list�� ���� �ִ� Account ��ü���� ������ +1
}

//id�� password�� ��ġ�ϴ� Account�� ã�Ƽ� ���۷����� ����
Account* AccountCollection::getAccount(string id, string password) {
    Node* current = ownedAccount;
    while (current) {
        if (current->pAccount->getID() == id && current->pAccount->getPassword() == password) { //id�� password�� ���� Account ��ü ã��
            return current->pAccount;
        }
        current = current->next;
    }
}