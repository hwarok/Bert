#pragma once
#include "Bike.h"
#include <vector>

//� ȸ��(Account)�� ���� �����ŵ��� ������ linked list ���·� �����ϴ� entity class
class RentedBike {
    struct Node {
        Bike* bike; //���� Bike ��ü�� ���۷���
        Node* next = nullptr;   //���� ���
        Node(Bike* bike)
            :bike(bike) {}
    };
    Node* rentedBike = nullptr; //linked list�� head
    int rentedBikeNumber = 0;   //linked list�� ���� �ִ� ���� Bike ��ü���� ����
public:
    //���Ӱ� ���� Bike ��ü�� �߰�. �Ű������� ���� Bike�� ���۷���
    void addRentedBike(Bike* rentBike);

    //�ش� Account���� ���� �����ŵ��� ���۷������� ����
    vector <Bike*> listRentedBike();
};