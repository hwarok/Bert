#include "Account.h"
#include "Bike.h"
#include "RentedBike.h"

//계정에서 빌린 자전거 정보를 추가. 매개변수는 빌릴 자전거의 레퍼런스
void Account::addRentedBike(Bike* rentBike) {
	rentedBike.addRentedBike(rentBike);	//account의 rentedBike의 addRentedBike를 호출하여 빌린 자전거 정보 추가. 매개변수는 빌릴 자전거의 레퍼런스
}

//계정에서 빌린 자전거들의 레퍼런스들을 리턴
vector<Bike*> Account::listRentedBike() {
	vector<Bike*> rentBikes = rentedBike.listRentedBike();	//account의 rentedBike의 listRentedBike를 호출하여 빌린 자전거들의 레퍼런스들을 리턴받는다
	return rentBikes;
}