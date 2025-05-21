#pragma once
#include "RentBike.h"
class RentBike;

//자전거 대여 기능 수행을 위한 boudnary class
class RentBikeUI {
	RentBike* pRentBike;	//control class의 레퍼런스
	ofstream& out_fp;	//결과 출력을 위한 out_fp의 레퍼런스
public:
	//boundary class가 생성될 때 control class의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
	RentBikeUI(RentBike* pRentBike, ofstream& out_fp)
		:pRentBike(pRentBike), out_fp(out_fp) {}

	//화면 출력
	void startInterface();

	//유저에게 자전거의 id를 입력받아 해당 자전거를 빌린다
	void rentBike(string id);
};