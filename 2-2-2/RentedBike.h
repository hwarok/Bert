#pragma once
#include "Bike.h"
#include <vector>

//어떤 회원(Account)이 빌린 자전거들의 정보를 linked list 형태로 관리하는 entity class
class RentedBike {
    struct Node {
        Bike* bike; //빌린 Bike 객체의 레퍼런스
        Node* next = nullptr;   //다음 노드
        Node(Bike* bike)
            :bike(bike) {}
    };
    Node* rentedBike = nullptr; //linked list의 head
    int rentedBikeNumber = 0;   //linked list에 속해 있는 빌린 Bike 객체들의 개수
public:
    //새롭게 빌린 Bike 객체를 추가. 매개변수는 빌린 Bike의 레퍼런스
    void addRentedBike(Bike* rentBike);

    //해당 Account에서 빌린 자전거들의 레퍼런스들을 리턴
    vector <Bike*> listRentedBike();
};