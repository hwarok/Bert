#include "AccountCollection.h"

//새로운 Account 객체를 추가. 매개변수는 Account의 id, password, phonenumber
void AccountCollection::addNewAccount(string id, string password, string phonenumber) {
    Account* newAccount = new Account(id, password, phonenumber);   //새 Account의 객체 생성
   
    //linked list에 추가
    Node* newNode = new Node(newAccount);
    newNode->next = ownedAccount;
    ownedAccount = newNode;

    accountNumber++;    //linked list에 속해 있는 Account 객체들의 개수를 +1
}

//id와 password가 일치하는 Account를 찾아서 레퍼런스를 리턴
Account* AccountCollection::getAccount(string id, string password) {
    Node* current = ownedAccount;
    while (current) {
        if (current->pAccount->getID() == id && current->pAccount->getPassword() == password) { //id와 password가 같은 Account 객체 찾기
            return current->pAccount;
        }
        current = current->next;
    }
}