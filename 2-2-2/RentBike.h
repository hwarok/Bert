#pragma once
#include "BikeCollection.h"
#include "RentBikeUI.h"
#include "CurrentLoginUser.h"
class RentBikeUI;

//자전거 대여 기능 수행을 위한 control class
class RentBike {
	RentBikeUI* pRentBikeUI = nullptr;	//boundary class의 레퍼런스
	CurrentLoginUser* pCurrentLoginUser = nullptr;	//CurrentLoginUser의 레퍼런스
	BikeCollection* pBikeCollection = nullptr;	//BikeCollection의 레퍼런스
public:
	//control class가 생성될 때 CurrentLoginUser의 레퍼런스, BikeCollection의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
	RentBike(CurrentLoginUser* pCurrentLoginUser, BikeCollection* pBikeCollection, ofstream& out_fp);

	//빌릴 자전거의 id를 파라미터로 받아서 현재 접속 중인 유저가 해당되는 자전거를 빌린다. 빌린 자전거의 제품명을 리턴
	string rentBike(string id);

	RentBikeUI* getpRentBikeUI() { return pRentBikeUI; }	//contorl class가 생성한 boundary class의 레퍼런스를 리턴
};