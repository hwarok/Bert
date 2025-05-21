#include <string>
#include "BikeCollection.h"
using namespace std;

//새로운 Bike 객체를 추가. 매개변수는 Bike의 id, productName
void BikeCollection::addNewBike(string id, string productName) {
    Bike* newBike = new Bike(id, productName);  //새 Bike의 객체 생성

    //linked list에 추가
    Node* newNode = new Node(newBike);
    newNode->next = ownedBike;
    ownedBike = newNode;

    bikeNumber++; //linked list에 속해 있는 Bike 객체들의 개수를 +1
}

//id와 productName이 일치하는 Bike를 찾아서 레퍼런스를 리턴
Bike* BikeCollection::getBike(string id, string productName) {
    Node* current = ownedBike;
    while (current) {
        if (current->pBike->getID() == id && current->pBike->getProductName() == productName) { //id와 productName이 같은 Account 객체 찾기
            return current->pBike;
        }
        current = current->next;
    }
}

//id가 일치하는 Bike를 찾아서 레퍼런스를 리턴
Bike* BikeCollection::getBike(string id) {
    Node* current = ownedBike;
    while (current) {
        if (current->pBike->getID() == id) {    //id가 같은 Account 객체 찾기
            return current->pBike;
        }
        current = current->next;
    }
}