#include "RentedBike.h"

//새롭게 빌린 Bike 객체를 추가. 매개변수는 빌린 Bike의 레퍼런스
void RentedBike::addRentedBike(Bike* rentBike) {
    //빌린 자전거의 레퍼런스를 받아서 linked list에 추가
    Node* newNode = new Node(rentBike); 
    newNode->next = rentedBike;
    rentedBike = newNode;

    rentedBikeNumber++; //linked list에 속해 있는 빌린 Bike 객체들의 개수를 +1
}

//해당 Account에서 빌린 자전거들의 레퍼런스들을 리턴
vector<Bike*> RentedBike::listRentedBike() {
    vector<Bike*> rentBikes;
    Node* current = rentedBike;
    while (current != nullptr) {
        rentBikes.push_back(current->bike);
        current = current->next;
    }
    return rentBikes;
}