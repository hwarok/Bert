#include "RentedBike.h"

//���Ӱ� ���� Bike ��ü�� �߰�. �Ű������� ���� Bike�� ���۷���
void RentedBike::addRentedBike(Bike* rentBike) {
    //���� �������� ���۷����� �޾Ƽ� linked list�� �߰�
    Node* newNode = new Node(rentBike); 
    newNode->next = rentedBike;
    rentedBike = newNode;

    rentedBikeNumber++; //linked list�� ���� �ִ� ���� Bike ��ü���� ������ +1
}

//�ش� Account���� ���� �����ŵ��� ���۷������� ����
vector<Bike*> RentedBike::listRentedBike() {
    vector<Bike*> rentBikes;
    Node* current = rentedBike;
    while (current != nullptr) {
        rentBikes.push_back(current->bike);
        current = current->next;
    }
    return rentBikes;
}