#pragma once
#include "Bike.h"

//��ϵ� Bike ��ü���� linked list ���·� �����ϴ� entity class
class BikeCollection {
    struct Node {
        Bike* pBike;    //Bike ��ü�� ���۷���
        Node* next = nullptr;   //���� ���
        Node(Bike* pBike)
            :pBike(pBike) {
        }
    };
    Node* ownedBike = nullptr;  //linked list�� head
    int bikeNumber = 0; //linked list�� ���� �ִ� Bike ��ü���� ����
public:
    //���ο� Bike ��ü�� �߰�. �Ű������� Bike�� id, productName
    void addNewBike(string id, string productName);

    //id�� productName�� ��ġ�ϴ� Bike�� ã�Ƽ� ���۷����� ����
    Bike* getBike(string id, string productName);
    
    //id�� ��ġ�ϴ� Bike�� ã�Ƽ� ���۷����� ����
    Bike* getBike(string id);
};