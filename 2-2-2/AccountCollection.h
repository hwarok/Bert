#pragma once
#include "Account.h"

//등록된 Account 객체들을 linked list 형태로 관리하는 entity class
class AccountCollection {
    struct Node {
        Account* pAccount;  //Account 객체의 레퍼런스
        Node* next = nullptr;   //다음 노드
        Node(Account* pAccount) 
            :pAccount(pAccount) {}
    };
    Node* ownedAccount = nullptr;   //linked list의 head
    int accountNumber = 0;  //linked list에 속해 있는 Account 객체들의 개수
public:
    //새로운 Account 객체를 추가. 매개변수는 Account의 id, password, phonenumber
    void addNewAccount(string id, string password, string phonenumber = "");
    
    //id와 password가 일치하는 Account를 찾아서 레퍼런스를 리턴
    Account* getAccount(string id, string password);
};