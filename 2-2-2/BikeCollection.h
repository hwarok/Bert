#pragma once
#include "Bike.h"

//등록된 Bike 객체들을 linked list 형태로 관리하는 entity class
class BikeCollection {
    struct Node {
        Bike* pBike;    //Bike 객체의 레퍼런스
        Node* next = nullptr;   //다음 노드
        Node(Bike* pBike)
            :pBike(pBike) {
        }
    };
    Node* ownedBike = nullptr;  //linked list의 head
    int bikeNumber = 0; //linked list에 속해 있는 Bike 객체들의 개수
public:
    //새로운 Bike 객체를 추가. 매개변수는 Bike의 id, productName
    void addNewBike(string id, string productName);

    //id와 productName이 일치하는 Bike를 찾아서 레퍼런스를 리턴
    Bike* getBike(string id, string productName);
    
    //id가 일치하는 Bike를 찾아서 레퍼런스를 리턴
    Bike* getBike(string id);
};