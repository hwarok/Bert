#pragma once
#include "BikeCollection.h"
#include "RegisterBikeUI.h"
class RegisterBikeUI;

//자전거 등록 기능 수행을 위한 control class
class RegisterBike {
	RegisterBikeUI* pRegisterBikeUI = nullptr;	//boundary class의 레퍼런스
	BikeCollection* pBikeCollection = nullptr;	//BikeCollection의 레퍼런스
public:
	//control class가 생성될 때 BikeCollection의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
	RegisterBike(BikeCollection* pBikeCollection, ofstream& out_fp);

	//자전거의 id, 제품명을 파라미터로 받아서 해당 자전거를 등록
	void registerBike(string id, string productName);

	RegisterBikeUI* getpRegisterBikeUI() { return pRegisterBikeUI; }	//contorl class가 생성한 boundary class의 레퍼런스를 리턴
};