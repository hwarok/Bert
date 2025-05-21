#pragma once
#include "ShowRentInfo.h"
#include <vector>
class ShowRentInfo;

//자전거 대여 정보 조회 기능 수행을 위한 boundary class
class ShowRentInfoUI {
	ofstream& out_fp;	//결과 출력을 위한 out_fp의 레퍼런스
public:
	//boundary class가 생성될 때 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
	ShowRentInfoUI(ofstream& out_fp)
		:out_fp(out_fp) {}

	//현재 접속 중인 유저가 빌린 자전거들의 id, 제품명 리스트를 화면에 출력
	void startInterface(vector<pair<string, string>> rentInfo);
};