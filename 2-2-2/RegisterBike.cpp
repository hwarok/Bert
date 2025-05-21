#include <string>
#include <fstream>
#include "RegisterBike.h"
#include "Account.h"
using namespace std;

//control class가 생성될 때 BikeCollection의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
RegisterBike::RegisterBike(BikeCollection* pBikeCollection, ofstream& out_fp) {
	//레퍼런스들을 넘겨받음
	this->pBikeCollection = pBikeCollection;

	//boundary class를 생성하고 control class, out_fp의 레퍼런스를 전달. startInterface()를 호출하여 화면을 출력
	pRegisterBikeUI = new RegisterBikeUI(this, out_fp);
	pRegisterBikeUI->startInterface();
}

//자전거의 id, 제품명을 파라미터로 받아서 해당 자전거를 등록
void RegisterBike::registerBike(string id, string productName) {
	pBikeCollection->addNewBike(id, productName);	//BikeCollection에게 해당되는 Bike 객체 추가 요청
}