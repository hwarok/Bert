#include <string>
#include "BikeCollection.h"
using namespace std;

//���ο� Bike ��ü�� �߰�. �Ű������� Bike�� id, productName
void BikeCollection::addNewBike(string id, string productName) {
    Bike* newBike = new Bike(id, productName);  //�� Bike�� ��ü ����

    //linked list�� �߰�
    Node* newNode = new Node(newBike);
    newNode->next = ownedBike;
    ownedBike = newNode;

    bikeNumber++; //linked list�� ���� �ִ� Bike ��ü���� ������ +1
}

//id�� productName�� ��ġ�ϴ� Bike�� ã�Ƽ� ���۷����� ����
Bike* BikeCollection::getBike(string id, string productName) {
    Node* current = ownedBike;
    while (current) {
        if (current->pBike->getID() == id && current->pBike->getProductName() == productName) { //id�� productName�� ���� Account ��ü ã��
            return current->pBike;
        }
        current = current->next;
    }
}

//id�� ��ġ�ϴ� Bike�� ã�Ƽ� ���۷����� ����
Bike* BikeCollection::getBike(string id) {
    Node* current = ownedBike;
    while (current) {
        if (current->pBike->getID() == id) {    //id�� ���� Account ��ü ã��
            return current->pBike;
        }
        current = current->next;
    }
}