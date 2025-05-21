#include <string>
#include <fstream>
#include "RentBike.h"
#include "CurrentLoginUser.h"
#include "BikeCollection.h"
#include "Account.h"
using namespace std;

//control class가 생성될 때 CurrentLoginUser의 레퍼런스, BikeCollection의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
RentBike::RentBike(CurrentLoginUser* pCurrentLoginUser, BikeCollection* pBikeCollection, ofstream& out_fp) {
	//레퍼런스들을 넘겨받음
	this->pCurrentLoginUser = pCurrentLoginUser;
	this->pBikeCollection = pBikeCollection;

	//boundary class를 생성하고 control class, out_fp의 레퍼런스를 전달. startInterface()를 호출하여 화면을 출력
	pRentBikeUI = new RentBikeUI(this, out_fp);
	pRentBikeUI->startInterface();
}

//빌릴 자전거의 id를 파라미터로 받아서 현재 접속 중인 유저가 해당되는 자전거를 빌린다. 빌린 자전거의 제품명을 리턴
string RentBike::rentBike(string id) {
	//현재 접속 중인 유저의 계정의 레퍼런스를 받아옴
	Account* currentLoginUser = pCurrentLoginUser->getCurrentLoginUser();

	//빌릴 자전거의 레퍼런스와 제품명을 받아옴
	Bike* rentBike = pBikeCollection->getBike(id);
	string productName = rentBike->getProductName();
	
	//현재 접속 중인 유저가 해당되는 자전거를 빌린다
	currentLoginUser->addRentedBike(rentBike);
	return productName;
}